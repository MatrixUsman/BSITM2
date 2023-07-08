package com.usman.pftsqlite;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.util.ArrayList;
import java.util.List;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.util.ArrayList;
import java.util.List;

public class BudgetDAO {
    private SQLiteDatabase database;
    private DbHelper dbHelper;

    public BudgetDAO(Context context) {
        dbHelper = new DbHelper(context);
    }

    public void open() {
        database = dbHelper.getWritableDatabase();
    }

    public void close() {
        dbHelper.close();
    }

    public long addBudget(Budget budget) {
        ContentValues values = new ContentValues();
        values.put(BudgetContract.BudgetEntry.COLUMN_CATEGORY, budget.getCategory());
        values.put(BudgetContract.BudgetEntry.COLUMN_AMOUNT, budget.getAmount());

        return database.insert(BudgetContract.BudgetEntry.TABLE_NAME, null, values);
    }

    public List<Budget> getAllBudgets() {
        List<Budget> budgetList = new ArrayList<>();

        Cursor cursor = database.query(
                BudgetContract.BudgetEntry.TABLE_NAME,
                null,
                null,
                null,
                null,
                null,
                null
        );

        if (cursor.moveToFirst()) {
            do {
                long id = cursor.getLong(cursor.getColumnIndex(BudgetContract.BudgetEntry._ID));
                String category = cursor.getString(cursor.getColumnIndex(BudgetContract.BudgetEntry.COLUMN_CATEGORY));
                double amount = cursor.getDouble(cursor.getColumnIndex(BudgetContract.BudgetEntry.COLUMN_AMOUNT));

                Budget budget = new Budget(id, category, amount);
                budgetList.add(budget);
            } while (cursor.moveToNext());
        }

        cursor.close();
        return budgetList;
    }

    public boolean updateBudget(Budget budget) {
        ContentValues values = new ContentValues();
        values.put(BudgetContract.BudgetEntry.COLUMN_CATEGORY, budget.getCategory());
        values.put(BudgetContract.BudgetEntry.COLUMN_AMOUNT, budget.getAmount());

        int rowsAffected = database.update(
                BudgetContract.BudgetEntry.TABLE_NAME,
                values,
                BudgetContract.BudgetEntry._ID + " = ?",
                new String[]{String.valueOf(budget.getId())}
        );

        return rowsAffected > 0;
    }

    public boolean deleteBudget(long budgetId) {
        int rowsAffected = database.delete(
                BudgetContract.BudgetEntry.TABLE_NAME,
                BudgetContract.BudgetEntry._ID + " = ?",
                new String[]{String.valueOf(budgetId)}
        );

        return rowsAffected > 0;
    }
}
