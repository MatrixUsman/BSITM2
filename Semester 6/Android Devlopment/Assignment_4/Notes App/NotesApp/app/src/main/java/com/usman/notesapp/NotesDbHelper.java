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
import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class NotesDbHelper extends SQLiteOpenHelper {

    private static final String DATABASE_NAME = "notes.db";
    private static final int DATABASE_VERSION = 1;

    public NotesDbHelper(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        final String SQL_CREATE_NOTES_TABLE =
                "CREATE TABLE " + NotesContract.NotesEntry.TABLE_NAME + " (" +
                        NotesContract.NotesEntry._ID + " INTEGER PRIMARY KEY AUTOINCREMENT," +
                        NotesContract.NotesEntry.COLUMN_NOTE + " TEXT NOT NULL" +
                        ");";

        db.execSQL(SQL_CREATE_NOTES_TABLE);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS " + NotesContract.NotesEntry.TABLE_NAME);
        onCreate(db);
    }

    public void insertOrUpdateNote(SQLiteDatabase db, String note) {
        ContentValues values = new ContentValues();
        values.put(NotesContract.NotesEntry.COLUMN_NOTE, note);

        db.insertWithOnConflict(
                NotesContract.NotesEntry.TABLE_NAME,
                null,
                values,
                SQLiteDatabase.CONFLICT_REPLACE
        );
    }

    public void deleteNoteByContent(SQLiteDatabase db, String note) {
        db.delete(
                NotesContract.NotesEntry.TABLE_NAME,
                NotesContract.NotesEntry.COLUMN_NOTE + " = ?",
                new String[]{note}
        );
    }
}
