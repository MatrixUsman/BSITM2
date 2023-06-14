package com.usman.bsit_m2_20_48;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;
import androidx.fragment.app.Fragment;

import static android.content.Context.MODE_PRIVATE;

public class SharedFragment extends Fragment {

    private EditText editTextName;
    private EditText editTextCity;
    private EditText editTextPhoneNumber;
    private EditText editTextSemester;
    private TextView textView;
    private SharedPreferences sharedPreferences;

    private static final String PREF_NAME = "MyPrefs";
    private static final String KEY_NAME = "name";
    private static final String KEY_CITY = "city";
    private static final String KEY_PHONE_NUMBER = "phone_number";
    private static final String KEY_SEMESTER = "semester";

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_shared_pref, container, false);

        editTextName = view.findViewById(R.id.editTextName);
        editTextCity = view.findViewById(R.id.editTextCity);
        editTextPhoneNumber = view.findViewById(R.id.editTextPhoneNumber);
        editTextSemester = view.findViewById(R.id.editTextSemester);
        textView = view.findViewById(R.id.textView);
        Button buttonSave = view.findViewById(R.id.buttonSave);

        sharedPreferences = requireContext().getSharedPreferences(PREF_NAME, MODE_PRIVATE);

        String savedName = sharedPreferences.getString(KEY_NAME, "");
        String savedCity = sharedPreferences.getString(KEY_CITY, "");
        String savedPhoneNumber = sharedPreferences.getString(KEY_PHONE_NUMBER, "");
        String savedSemester = sharedPreferences.getString(KEY_SEMESTER, "");

        editTextName.setText(savedName);
        editTextCity.setText(savedCity);
        editTextPhoneNumber.setText(savedPhoneNumber);
        editTextSemester.setText(savedSemester);

        textView.setText("Saved data:\nName: " + savedName + "\nCity: " + savedCity +
                "\nPhone Number: " + savedPhoneNumber + "\nSemester: " + savedSemester);

        buttonSave.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = editTextName.getText().toString().trim();
                String city = editTextCity.getText().toString().trim();
                String phoneNumber = editTextPhoneNumber.getText().toString().trim();
                String semester = editTextSemester.getText().toString().trim();

                if (TextUtils.isEmpty(name) || TextUtils.isEmpty(city) ||
                        TextUtils.isEmpty(phoneNumber) || TextUtils.isEmpty(semester)) {
                    Toast.makeText(requireContext(), "Please fill in all fields", Toast.LENGTH_SHORT).show();
                    return;
                }

                try {
                    SharedPreferences.Editor editor = sharedPreferences.edit();
                    editor.putString(KEY_NAME, name);
                    editor.putString(KEY_CITY, city);
                    editor.putString(KEY_PHONE_NUMBER, phoneNumber);
                    editor.putString(KEY_SEMESTER, semester);
                    editor.apply();

                    textView.setText("Saved data:\nName: " + name + "\nCity: " + city +
                            "\nPhone Number: " + phoneNumber + "\nSemester: " + semester);

                    Toast.makeText(requireContext(), "Data saved successfully", Toast.LENGTH_SHORT).show();
                } catch (Exception e) {
                    Toast.makeText(requireContext(), "Error saving data", Toast.LENGTH_SHORT).show();
                    e.printStackTrace();
                }
            }
        });

        return view;
    }}
