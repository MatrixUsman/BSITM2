package com.usman.pftsqlite;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.util.ArrayList;
import java.util.List;
import java.util.List;

public class ReportGenerator {

    private List<Transaction> transactionList;

    public ReportGenerator(List<Transaction> transactionList) {
        this.transactionList = transactionList;
    }

    public double calculateTotalExpense() {
        double totalExpense = 0;
        for (Transaction transaction : transactionList) {
            if (transaction.getAmount() < 0) {
                totalExpense += transaction.getAmount();
            }
        }
        return totalExpense;
    }

    public double calculateTotalIncome() {
        double totalIncome = 0;
        for (Transaction transaction : transactionList) {
            if (transaction.getAmount() > 0) {
                totalIncome += transaction.getAmount();
            }
        }
        return totalIncome;
    }

    public double calculateAverageExpensePerCategory(String category) {
        double totalExpense = 0;
        int count = 0;
        for (Transaction transaction : transactionList) {
            if (transaction.getCategory().equals(category) && transaction.getAmount() < 0) {
                totalExpense += transaction.getAmount();
                count++;
            }
        }
        if (count > 0) {
            return totalExpense / count;
        } else {
            return 0;
        }
    }

    public double calculateMaximumExpense() {
        double maxExpense = Double.MIN_VALUE;
        for (Transaction transaction : transactionList) {
            if (transaction.getAmount() < 0 && transaction.getAmount() < maxExpense) {
                maxExpense = transaction.getAmount();
            }
        }
        return maxExpense;
    }

    public double calculateMinimumExpense() {
        double minExpense = Double.MAX_VALUE;
        for (Transaction transaction : transactionList) {
            if (transaction.getAmount() < 0 && transaction.getAmount() > minExpense) {
                minExpense = transaction.getAmount();
            }
        }
        return minExpense;
    }
}
