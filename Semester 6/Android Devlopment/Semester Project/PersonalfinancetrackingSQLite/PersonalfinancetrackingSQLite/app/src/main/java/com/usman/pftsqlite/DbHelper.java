package com.usman.pftsqlite;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class DbHelper extends SQLiteOpenHelper {
    private static final String DATABASE_NAME = "finance_tracker.db";
    private static final int DATABASE_VERSION = 1;

    // Define the table creation queries
    private static final String CREATE_TRANSACTION_TABLE_QUERY =
            "CREATE TABLE " + TransactionContract.TransactionEntry.TABLE_NAME + " (" +
                    TransactionContract.TransactionEntry._ID + " INTEGER PRIMARY KEY AUTOINCREMENT, " +
                    TransactionContract.TransactionEntry.COLUMN_DATE + " TEXT NOT NULL, " +
                    TransactionContract.TransactionEntry.COLUMN_CATEGORY + " TEXT NOT NULL, " +
                    TransactionContract.TransactionEntry.COLUMN_AMOUNT + " REAL NOT NULL, " +
                    TransactionContract.TransactionEntry.COLUMN_NOTES + " TEXT)";

    private static final String CREATE_BUDGET_TABLE_QUERY =
            "CREATE TABLE " + BudgetContract.BudgetEntry.TABLE_NAME + " (" +
                    BudgetContract.BudgetEntry._ID + " INTEGER PRIMARY KEY AUTOINCREMENT, " +
                    BudgetContract.BudgetEntry.COLUMN_CATEGORY + " TEXT NOT NULL, " +
                    BudgetContract.BudgetEntry.COLUMN_AMOUNT + " REAL NOT NULL)";

    public DbHelper(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        // Create the transaction table
        db.execSQL(CREATE_TRANSACTION_TABLE_QUERY);

        // Create the budget table
        db.execSQL(CREATE_BUDGET_TABLE_QUERY);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        // Drop existing tables and recreate them
        db.execSQL("DROP TABLE IF EXISTS " + TransactionContract.TransactionEntry.TABLE_NAME);
        db.execSQL("DROP TABLE IF EXISTS " + BudgetContract.BudgetEntry.TABLE_NAME);
        onCreate(db);
    }
}
