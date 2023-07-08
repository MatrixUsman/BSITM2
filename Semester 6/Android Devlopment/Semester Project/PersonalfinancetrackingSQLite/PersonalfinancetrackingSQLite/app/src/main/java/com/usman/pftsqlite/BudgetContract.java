package com.usman.pftsqlite;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;

import java.util.List;
import android.provider.BaseColumns;

public final class BudgetContract {
    private BudgetContract() {}

    public static class BudgetEntry implements BaseColumns {
        public static final String TABLE_NAME = "budget";
        public static final String COLUMN_CATEGORY = "category";
        public static final String COLUMN_AMOUNT = "amount";
    }
}
