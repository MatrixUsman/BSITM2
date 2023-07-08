package com.usman.pftsqlite;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class TransactionEntryActivity extends AppCompatActivity {

    private EditText editTextDate;
    private EditText editTextCategory;
    private EditText editTextAmount;
    private EditText editTextNotes;
    private Button buttonSave;

    private TransactionDAO transactionDAO;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_transaction_entry);

        transactionDAO = new TransactionDAO(this);
        transactionDAO.open();

        editTextDate = findViewById(R.id.editTextDate);
        editTextCategory = findViewById(R.id.editTextCategory);
        editTextAmount = findViewById(R.id.editTextAmount);
        editTextNotes = findViewById(R.id.editTextNotes);
        buttonSave = findViewById(R.id.buttonSave);

        buttonSave.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                saveTransaction();
            }
        });
    }

    private void saveTransaction() {
        String date = editTextDate.getText().toString().trim();
        String category = editTextCategory.getText().toString().trim();
        String amountText = editTextAmount.getText().toString().trim();
        String notes = editTextNotes.getText().toString().trim();

        if (date.isEmpty() || category.isEmpty() || amountText.isEmpty()) {
            Toast.makeText(this, "Please fill in all required fields.", Toast.LENGTH_SHORT).show();
            return;
        }

        double amount = Double.parseDouble(amountText);
        Transaction transaction = new Transaction(0, date, category, amount, notes);
        long insertedId = transactionDAO.addTransaction(transaction);

        if (insertedId != -1) {
            Toast.makeText(this, "Transaction saved successfully.", Toast.LENGTH_SHORT).show();
            clearFields();
        } else {
            Toast.makeText(this, "Failed to save transaction.", Toast.LENGTH_SHORT).show();
        }
    }

    private void clearFields() {
        editTextDate.setText("");
        editTextCategory.setText("");
        editTextAmount.setText("");
        editTextNotes.setText("");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        transactionDAO.close();
    }
}
