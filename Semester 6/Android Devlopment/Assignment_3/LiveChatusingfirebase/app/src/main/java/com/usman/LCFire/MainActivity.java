package com.usman.LCFire;

import androidx.appcompat.app.AppCompatActivity;
import androidx.annotation.NonNull;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {
    private EditText nameEditText;
    private Button startChatButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        nameEditText = findViewById(R.id.nameEditText);
        startChatButton = findViewById(R.id.startChatButton);

        startChatButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String userName = nameEditText.getText().toString().trim();
                if (!userName.isEmpty()) {
                    Intent intent = new Intent(MainActivity.this, ChatActivity.class);
                    intent.putExtra("username", userName);
                    startActivity(intent);
                }
            }
        });
    }
}