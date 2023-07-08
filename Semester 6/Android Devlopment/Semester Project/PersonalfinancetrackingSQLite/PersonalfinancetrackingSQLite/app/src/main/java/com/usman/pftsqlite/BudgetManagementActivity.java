package com.usman.pftsqlite;

import android.os.Bundle;
import android.widget.ListView;

import androidx.appcompat.app.AppCompatActivity;

import java.util.List;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class BudgetManagementActivity extends AppCompatActivity {

    private EditText editTextCategory;
    private EditText editTextAmount;
    private Button buttonSave;

    private BudgetDAO budgetDAO;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_budget_management);

        budgetDAO = new BudgetDAO(this);
        budgetDAO.open();

        editTextCategory = findViewById(R.id.editTextCategory);
        editTextAmount = findViewById(R.id.editTextAmount);
        buttonSave = findViewById(R.id.buttonSave);

        buttonSave.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                saveBudget();
            }
        });
    }

    private void saveBudget() {
        String category = editTextCategory.getText().toString().trim();
        String amountText = editTextAmount.getText().toString().trim();

        if (category.isEmpty() || amountText.isEmpty()) {
            Toast.makeText(this, "Please fill in all required fields.", Toast.LENGTH_SHORT).show();
            return;
        }

        double amount = Double.parseDouble(amountText);
        Budget budget = new Budget(0, category, amount);
        long insertedId = budgetDAO.addBudget(budget);

        if (insertedId != -1) {
            Toast.makeText(this, "Budget saved successfully.", Toast.LENGTH_SHORT).show();
            clearFields();
        } else {
            Toast.makeText(this, "Failed to save budget.", Toast.LENGTH_SHORT).show();
        }
    }

    private void clearFields() {
        editTextCategory.setText("");
        editTextAmount.setText("");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        budgetDAO.close();
    }
}
