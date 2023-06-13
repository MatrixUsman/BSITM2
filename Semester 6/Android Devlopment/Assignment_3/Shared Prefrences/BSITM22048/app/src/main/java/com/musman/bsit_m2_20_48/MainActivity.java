package com.musman.bsit_m2_20_48;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.content.SharedPreferences;

import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private EditText editTextName;
    private TextView textView;
    private SharedPreferences sharedPreferences;

    private static final String PREF_NAME = "MyPrefs";
    private static final String KEY_NAME = "name";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editTextName = findViewById(R.id.editTextName);
        textView = findViewById(R.id.textView);
        Button buttonSave = findViewById(R.id.buttonSave);

        sharedPreferences = getSharedPreferences(PREF_NAME, MODE_PRIVATE);

        String savedName = sharedPreferences.getString(KEY_NAME, "");
        textView.setText("Saved name: " + savedName);

        buttonSave.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = editTextName.getText().toString().trim();

                if (TextUtils.isEmpty(name)) {
                    Toast.makeText(MainActivity.this, "Please enter a name", Toast.LENGTH_SHORT).show();
                    return;
                }

                try {
                    SharedPreferences.Editor editor = sharedPreferences.edit();
                    editor.putString(KEY_NAME, name);
                    editor.apply();

                    textView.setText("Saved name: " + name);
                    Toast.makeText(MainActivity.this, "Name saved successfully", Toast.LENGTH_SHORT).show();
                } catch (Exception e) {
                    Toast.makeText(MainActivity.this, "Error saving name", Toast.LENGTH_SHORT).show();
                    e.printStackTrace();
                }
            }
        });
    }
}
