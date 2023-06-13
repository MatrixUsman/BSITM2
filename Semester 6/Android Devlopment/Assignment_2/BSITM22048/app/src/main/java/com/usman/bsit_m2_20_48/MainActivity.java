package com.usman.bsit_m2_20_48;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.widget.EditText;
import android.widget.Toast;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        EditText editTextEmail = findViewById(R.id.editTextEmail);
        editTextEmail.addTextChangedListener(new TextWatcher() {
            @Override
            public void beforeTextChanged(CharSequence s, int start, int count, int after) {
            }

            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) {
            }

            @Override
            public void afterTextChanged(Editable s) {
                String email = s.toString().trim();

                Pattern pattern = Pattern.compile("[a-zA-Z0-9._-]+@[a-zA-Z0-9]+\\.[a-z]+");
                Matcher matcher = pattern.matcher(email);

                if (matcher.matches()) {
                    // Email is valid
                    Toast.makeText(getApplicationContext(), "Email is valid", Toast.LENGTH_SHORT).show();
                } else {
                    // Email is invalid
                    Toast.makeText(getApplicationContext(), "Invalid email address", Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}