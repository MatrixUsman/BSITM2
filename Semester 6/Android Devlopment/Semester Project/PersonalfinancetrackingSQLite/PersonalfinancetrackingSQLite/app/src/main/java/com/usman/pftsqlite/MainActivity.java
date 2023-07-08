package com.usman.pftsqlite;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private Button buttonTransactionEntry;
    private Button buttonTransactionList;
    private Button buttonBudgetManagement;
    private Button buttonReports;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize buttons
        buttonTransactionEntry = findViewById(R.id.buttonAddTransaction);
        buttonTransactionList = findViewById(R.id.buttonViewTransactions);
        buttonBudgetManagement = findViewById(R.id.buttonManageBudget);
        buttonReports = findViewById(R.id.buttonViewReports);


        // Set click listeners
        buttonTransactionEntry.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                openTransactionEntry();
            }
        });

        buttonTransactionList.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                openTransactionList();
            }
        });

        buttonBudgetManagement.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                openBudgetManagement();
            }
        });

        buttonReports.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                openReports();
            }
        });
    }

    private void openTransactionEntry() {
        Intent intent = new Intent(MainActivity.this, TransactionEntryActivity.class);
        startActivity(intent);
    }


    private void openTransactionList() {
        Intent intent = new Intent(MainActivity.this, TransactionListActivity.class);
        startActivity(intent);
    }

    private void openBudgetManagement() {
        Intent intent = new Intent(MainActivity.this, BudgetManagementActivity.class);
        startActivity(intent);
    }

    private void openReports() {
        Intent intent = new Intent(MainActivity.this, ReportsActivity.class);
        startActivity(intent);
    }

}
