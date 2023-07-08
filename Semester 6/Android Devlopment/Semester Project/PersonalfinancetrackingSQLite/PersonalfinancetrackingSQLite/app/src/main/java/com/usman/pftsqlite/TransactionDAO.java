package com.usman.pftsqlite;
import android.provider.BaseColumns;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.util.ArrayList;
import java.util.List;

public class TransactionDAO {

    private SQLiteDatabase database;
    private DbHelper dbHelper;

    public TransactionDAO(Context context) {
        dbHelper = new DbHelper(context);
    }

    public void open() {
        database = dbHelper.getWritableDatabase();
    }

    public void close() {
        dbHelper.close();
    }

    public long addTransaction(Transaction transaction) {
        ContentValues values = new ContentValues();
        values.put(TransactionContract.TransactionEntry.COLUMN_DATE, transaction.getDate());
        values.put(TransactionContract.TransactionEntry.COLUMN_CATEGORY, transaction.getCategory());
        values.put(TransactionContract.TransactionEntry.COLUMN_AMOUNT, transaction.getAmount());
        values.put(TransactionContract.TransactionEntry.COLUMN_NOTES, transaction.getNotes());

        return database.insert(TransactionContract.TransactionEntry.TABLE_NAME, null, values);
    }

    public List<Transaction> getAllTransactions() {
        List<Transaction> transactionList = new ArrayList<>();

        Cursor cursor = database.query(
                TransactionContract.TransactionEntry.TABLE_NAME,
                null,
                null,
                null,
                null,
                null,
                null
        );

        if (cursor.moveToFirst()) {
            do {
                long id = cursor.getLong(cursor.getColumnIndex(TransactionContract.TransactionEntry._ID));
                String date = cursor.getString(cursor.getColumnIndex(TransactionContract.TransactionEntry.COLUMN_DATE));
                String category = cursor.getString(cursor.getColumnIndex(TransactionContract.TransactionEntry.COLUMN_CATEGORY));
                double amount = cursor.getDouble(cursor.getColumnIndex(TransactionContract.TransactionEntry.COLUMN_AMOUNT));
                String notes = cursor.getString(cursor.getColumnIndex(TransactionContract.TransactionEntry.COLUMN_NOTES));

                Transaction transaction = new Transaction(id, date, category, amount, notes);
                transactionList.add(transaction);
            } while (cursor.moveToNext());
        }

        cursor.close();
        return transactionList;
    }

    public boolean updateTransaction(Transaction transaction) {
        ContentValues values = new ContentValues();
        values.put(TransactionContract.TransactionEntry.COLUMN_DATE, transaction.getDate());
        values.put(TransactionContract.TransactionEntry.COLUMN_CATEGORY, transaction.getCategory());
        values.put(TransactionContract.TransactionEntry.COLUMN_AMOUNT, transaction.getAmount());
        values.put(TransactionContract.TransactionEntry.COLUMN_NOTES, transaction.getNotes());

        int rowsAffected = database.update(
                TransactionContract.TransactionEntry.TABLE_NAME,
                values,
                TransactionContract.TransactionEntry._ID + " = ?",
                new String[]{String.valueOf(transaction.getId())}
        );

        return rowsAffected > 0;
    }

    public boolean deleteTransaction(long transactionId) {
        int rowsAffected = database.delete(
                TransactionContract.TransactionEntry.TABLE_NAME,
                TransactionContract.TransactionEntry._ID + " = ?",
                new String[]{String.valueOf(transactionId)}
        );

        return rowsAffected > 0;
    }
}
