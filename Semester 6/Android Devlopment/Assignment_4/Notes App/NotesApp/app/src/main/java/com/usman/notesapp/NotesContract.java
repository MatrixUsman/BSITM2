package com.usman.notesapp;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import android.provider.BaseColumns;

public class NotesContract {

    private NotesContract() {
    }

    public static class NotesEntry implements BaseColumns {
        public static final String TABLE_NAME = "notes";
        public static final String COLUMN_NOTE = "note";

    }
}
