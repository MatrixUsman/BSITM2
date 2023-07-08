package com.usman.pftsqlite;
import java.util.ArrayList;
import java.util.Map;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import com.github.mikephil.charting.charts.PieChart;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;
import java.util.HashMap;


import androidx.appcompat.app.AppCompatActivity;

import java.util.List;

public class ReportsActivity extends AppCompatActivity {

    private Button buttonGenerateReport;
    private LinearLayout chartContainer;
    private TextView textViewTotalExpense;
    private TextView textViewTotalIncome;
    private TextView textViewAvgExpense;
    private TextView textViewMaxExpense;
    private TextView textViewMinExpense;

    private TransactionDAO transactionDAO;
    private ReportGenerator reportGenerator;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_reports);

        transactionDAO = new TransactionDAO(this);
        transactionDAO.open();

        List<Transaction> transactionList = transactionDAO.getAllTransactions();

        reportGenerator = new ReportGenerator(transactionList);

        buttonGenerateReport = findViewById(R.id.buttonGenerateReport);
        chartContainer = findViewById(R.id.chartContainer);
        textViewTotalExpense = findViewById(R.id.textViewTotalExpense);
        textViewTotalIncome = findViewById(R.id.textViewTotalIncome);
        textViewAvgExpense = findViewById(R.id.textViewAvgExpense);
        textViewMaxExpense = findViewById(R.id.textViewMaxExpense);
        textViewMinExpense = findViewById(R.id.textViewMinExpense);

        buttonGenerateReport.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                generateReport();
            }
        });
    }

    private void generateReport() {
        double totalExpense = reportGenerator.calculateTotalExpense();
        double totalIncome = reportGenerator.calculateTotalIncome();
        double avgExpense = reportGenerator.calculateAverageExpensePerCategory("Category");
        double maxExpense = reportGenerator.calculateMaximumExpense();
        double minExpense = reportGenerator.calculateMinimumExpense();

        textViewTotalExpense.setText(String.valueOf(totalExpense));
        textViewTotalIncome.setText(String.valueOf(totalIncome));
        textViewAvgExpense.setText(String.valueOf(avgExpense));
        textViewMaxExpense.setText(String.valueOf(maxExpense));
        textViewMinExpense.setText(String.valueOf(minExpense));

        // Generate and display the pie chart
        List<String> labels = new ArrayList<>();
        List<Float> values = new ArrayList<>();

// Retrieve transaction data from the database or any other source
        List<Transaction> transactions = transactionDAO.getAllTransactions();

// Calculate category-wise expense totals
        HashMap<String, Double> categoryExpenses = new HashMap<>();
        for (Transaction transaction : transactions) {
            String category = transaction.getCategory();
            double amount = transaction.getAmount();

            if (categoryExpenses.containsKey(category)) {
                totalExpense += categoryExpenses.get(category) + amount;
                categoryExpenses.put(category, totalExpense);
            } else {
                categoryExpenses.put(category, amount);
            }
        }

// Add category labels and corresponding values to the lists
        for (Map.Entry<String, Double> entry : categoryExpenses.entrySet()) {
            labels.add(entry.getKey());
            values.add(entry.getValue().floatValue());
        }


        PieChart pieChart = new PieChart(this);
        chartContainer.addView(pieChart);

        ChartUtils.displayPieChart(this, pieChart, labels, values);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        transactionDAO.close();
    }
}
