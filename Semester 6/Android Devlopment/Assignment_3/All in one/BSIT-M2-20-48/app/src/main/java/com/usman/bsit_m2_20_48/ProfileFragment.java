package com.usman.bsit_m2_20_48;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.fragment.app.Fragment;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import android.widget.TextView;
import androidx.fragment.app.FragmentTransaction;

public class ProfileFragment extends Fragment {

    private Button buttonLogout;

    private FirebaseAuth firebaseAuth;

    public ProfileFragment() {
        // Required empty public constructor
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_profile, container, false);

        firebaseAuth = FirebaseAuth.getInstance();

        // Initialize views
        // Replace the following lines with your own views for displaying user profile information
        TextView textViewFullName = view.findViewById(R.id.textViewFullName);
        TextView textViewEmail = view.findViewById(R.id.textViewEmail);
        // ...

        buttonLogout = view.findViewById(R.id.buttonLogout);
        buttonLogout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                logoutUser();
            }
        });

        // Get the current user and display their profile information
        FirebaseUser firebaseUser = firebaseAuth.getCurrentUser();
        if (firebaseUser != null) {
            String fullName = firebaseUser.getDisplayName();
            String email = firebaseUser.getEmail();

            // Update the TextViews with the user's information
            textViewFullName.setText(fullName);
            textViewEmail.setText(email);
        }

        return view;
    }

    private void logoutUser() {
        firebaseAuth.signOut();
        // Navigate to the login screen or any other desired screen after logout
        // For example, you can replace the current fragment with the login fragment
        FragmentTransaction transaction = requireActivity().getSupportFragmentManager().beginTransaction();
        transaction.replace(R.id.fragment_container, new SignInFragment());
        transaction.commit();
    }
}
