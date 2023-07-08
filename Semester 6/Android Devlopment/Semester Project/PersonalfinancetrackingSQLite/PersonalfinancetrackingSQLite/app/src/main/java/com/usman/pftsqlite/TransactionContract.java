package com.usman.pftsqlite;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.provider.BaseColumns;

public class TransactionContract {
    private TransactionContract() {
        // Private constructor to prevent instantiation
    }

    public static final class TransactionEntry implements BaseColumns {
        public static final String TABLE_NAME = "transactions";
        public static final String COLUMN_DATE = "date";
        public static final String COLUMN_CATEGORY = "category";
        public static final String COLUMN_AMOUNT = "amount";
        public static final String COLUMN_NOTES = "notes";
    }
}
