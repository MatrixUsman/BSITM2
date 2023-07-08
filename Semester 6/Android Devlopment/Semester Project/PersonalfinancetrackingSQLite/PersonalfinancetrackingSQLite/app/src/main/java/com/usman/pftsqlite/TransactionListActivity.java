package com.usman.pftsqlite;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.ListView;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import java.util.List;

public class TransactionListActivity extends AppCompatActivity {

    private ListView listViewTransactions;
    private TransactionAdapter transactionAdapter;

    private TransactionDAO transactionDAO;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_transaction_list);

        transactionDAO = new TransactionDAO(this);
        transactionDAO.open();

        listViewTransactions = findViewById(R.id.listViewTransactions);
        List<Transaction> transactionList = transactionDAO.getAllTransactions();

        transactionAdapter = new TransactionAdapter(this, transactionList);
        listViewTransactions.setAdapter(transactionAdapter);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        transactionDAO.close();
    }
}
