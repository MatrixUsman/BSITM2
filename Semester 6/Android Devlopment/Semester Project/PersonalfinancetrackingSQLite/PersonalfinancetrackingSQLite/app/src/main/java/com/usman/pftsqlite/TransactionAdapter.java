package com.usman.pftsqlite;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.util.ArrayList;
import java.util.List;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;

import java.util.List;

public class TransactionAdapter extends ArrayAdapter<Transaction> {

    private LayoutInflater inflater;

    public TransactionAdapter(Context context, List<Transaction> transactions) {
        super(context, 0, transactions);
        inflater = LayoutInflater.from(context);
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        ViewHolder viewHolder;

        if (convertView == null) {
            convertView = inflater.inflate(R.layout.list_item_transaction, parent, false);

            viewHolder = new ViewHolder();
            viewHolder.textViewDate = convertView.findViewById(R.id.textViewDate);
            viewHolder.textViewCategory = convertView.findViewById(R.id.textViewCategory);
            viewHolder.textViewAmount = convertView.findViewById(R.id.textViewAmount);

            convertView.setTag(viewHolder);
        } else {
            viewHolder = (ViewHolder) convertView.getTag();
        }

        Transaction transaction = getItem(position);

        if (transaction != null) {
            viewHolder.textViewDate.setText(transaction.getDate());
            viewHolder.textViewCategory.setText(transaction.getCategory());
            viewHolder.textViewAmount.setText(String.valueOf(transaction.getAmount()));
        }

        return convertView;
    }

    private static class ViewHolder {
        TextView textViewDate;
        TextView textViewCategory;
        TextView textViewAmount;
    }
}
