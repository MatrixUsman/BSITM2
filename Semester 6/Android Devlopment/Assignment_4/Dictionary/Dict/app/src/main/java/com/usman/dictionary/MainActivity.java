package com.usman.dictionary;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
// MainActivity.java
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;

import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;

import androidx.appcompat.app.AppCompatActivity;
// MainActivity.java
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private DictionaryDatabaseHelper dbHelper;
    private SQLiteDatabase db;
    private SimpleCursorAdapter adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        dbHelper = new DictionaryDatabaseHelper(this);
        db = dbHelper.getReadableDatabase();

        Cursor cursor = db.rawQuery("SELECT rowid _id, * FROM words", null);
        if (cursor.getCount() == 0) {
            // Only insert data if the table is empty
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('abandon', 'To leave somebody, especially somebody you are responsible for, with no intention of returning')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('ability', 'Ability to do something the fact that somebody/something is able to do something')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('able', 'Able to do something')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('about', 'A little more or less than; a little before or after')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('above', 'At or to a higher place')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('abroad', 'On the subject of somebody/something; in connection with somebody/something')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('absolute', 'Total and complete')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('academic', 'A person who teaches and/or does research at a university or college')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('accept', 'To take willingly something that is offered; to say ‘yes’ to an offer, invitation, etc.')");
            db.execSQL("INSERT INTO words (word, meaning) VALUES ('access', 'The opportunity or right to use something or to see somebody/something')");
        }

        String[] fromColumns = {"word", "meaning"};
        int[] toViews = {R.id.textViewWord, R.id.textViewMeaning};

        adapter = new SimpleCursorAdapter(this, R.layout.list_item_word, cursor, fromColumns, toViews, 0);

        ListView listViewWords = findViewById(R.id.listViewWords);
        listViewWords.setAdapter(adapter);
    }


    @Override
    protected void onDestroy() {
        super.onDestroy();
        db.close();
        dbHelper.close();
    }
}
