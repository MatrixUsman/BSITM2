package com.usman.LCFire;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import android.widget.Button;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.util.ArrayList;
import java.util.List;

public class ChatActivity extends AppCompatActivity {
    private DatabaseReference messagesRef;
    private List<String> messagesList;
    private ArrayAdapter<String> adapter;
    private ListView messagesListView;
    private EditText messageEditText;
    private Button sendButton;
    private String userName;

    private ValueEventListener valueEventListener;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_chat);
        userName = getIntent().getStringExtra("username");

        messagesRef = FirebaseDatabase.getInstance().getReference().child("chat_messages");

        messagesListView = findViewById(R.id.messagesListView);
        messageEditText = findViewById(R.id.messageEditText);
        sendButton = findViewById(R.id.sendButton);

        messagesList = new ArrayList<>();
        adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, messagesList);
        messagesListView.setAdapter(adapter);

        valueEventListener = new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                messagesList.clear();
                for (DataSnapshot childSnapshot : dataSnapshot.getChildren()) {
                    String message = childSnapshot.getValue(String.class);
                    messagesList.add(message);
                }
                adapter.notifyDataSetChanged();
                messagesListView.smoothScrollToPosition(messagesList.size() - 1);
            }

            @Override
            public void onCancelled(DatabaseError databaseError) {
                // Handle database error
            }
        };

        messagesRef.addValueEventListener(valueEventListener);

        sendButton.setOnClickListener(view -> {
            String message = messageEditText.getText().toString().trim();
            if (!message.isEmpty()) {
                String key = messagesRef.push().getKey();
                String fullMessage = userName + ": " + message;
                messagesRef.child(key).setValue(fullMessage);
                messageEditText.setText("");
            }
        });
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (valueEventListener != null) {
            messagesRef.removeEventListener(valueEventListener);
        }
    }
}
