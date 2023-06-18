package com.usman.notesapp;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
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
import androidx.appcompat.widget.AppCompatImageButton;

public class MainActivity extends AppCompatActivity implements AddEditNoteDialog.AddEditNoteListener {

    private ArrayList<String> notesList;
    private ArrayAdapter<String> adapter;
    private ListView notesListView;
    private int selectedNotePosition = -1;

    private NotesDbHelper dbHelper;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        dbHelper = new NotesDbHelper(this);

        notesListView = findViewById(R.id.notesListView);
        AppCompatImageButton addButton = findViewById(R.id.addButton);
        AppCompatImageButton editButton = findViewById(R.id.editButton);
        AppCompatImageButton deleteButton = findViewById(R.id.deleteButton);





        notesList = new ArrayList<>();
        adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, notesList);
        notesListView.setAdapter(adapter);

        loadNotes();

        notesListView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int position, long l) {
                selectedNotePosition = position;
            }
        });

        addButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                addNote();
            }
        });

        editButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                editNote();
            }
        });

        deleteButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                deleteNote();
            }
        });
    }

    private void loadNotes() {
        notesList.clear();

        SQLiteDatabase db = dbHelper.getReadableDatabase();
        Cursor cursor = db.rawQuery("SELECT * FROM " + NotesContract.NotesEntry.TABLE_NAME, null);

        if (cursor.moveToFirst()) {
            while (!cursor.isAfterLast()) {
                String note = cursor.getString(cursor.getColumnIndex(NotesContract.NotesEntry.COLUMN_NOTE));
                notesList.add(note);
                cursor.moveToNext();
            }
        }

        adapter.notifyDataSetChanged();
        cursor.close();
    }

    private void addNote() {
        AddEditNoteDialog dialog = AddEditNoteDialog.newInstance(null, -1);
        dialog.show(getSupportFragmentManager(), "AddEditNoteDialog");
    }

    private void editNote() {
        if (selectedNotePosition != -1) {
            String note = notesList.get(selectedNotePosition);
            AddEditNoteDialog dialog = AddEditNoteDialog.newInstance(note, selectedNotePosition);
            dialog.show(getSupportFragmentManager(), "AddEditNoteDialog");
        } else {
            Toast.makeText(this, "Please select a note to edit.", Toast.LENGTH_SHORT).show();
        }
    }

    private void deleteNote() {
        if (selectedNotePosition != -1) {
            String note = notesList.get(selectedNotePosition);
            SQLiteDatabase db = dbHelper.getWritableDatabase();
            dbHelper.deleteNoteByContent(db, note);
            loadNotes();
        } else {
            Toast.makeText(this, "Please select a note to delete.", Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    public void onNoteAddedOrEdited(String note) {
        SQLiteDatabase db = dbHelper.getWritableDatabase();
        dbHelper.insertOrUpdateNote(db, note);
        loadNotes();
    }
}
