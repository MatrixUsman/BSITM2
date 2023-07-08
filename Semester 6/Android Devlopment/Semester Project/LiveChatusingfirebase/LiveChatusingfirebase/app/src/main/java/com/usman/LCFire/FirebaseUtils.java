package com.usman.LCFire;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class FirebaseUtils {
    private static FirebaseAuth mAuth;
    private static FirebaseDatabase mDatabase;

    public static FirebaseAuth getAuthInstance() {
        if (mAuth == null) {
            mAuth = FirebaseAuth.getInstance();
        }
        return mAuth;
    }

    public static DatabaseReference getDatabaseReference() {
        if (mDatabase == null) {
            mDatabase = FirebaseDatabase.getInstance();
        }
        return mDatabase.getReference();
    }
}
