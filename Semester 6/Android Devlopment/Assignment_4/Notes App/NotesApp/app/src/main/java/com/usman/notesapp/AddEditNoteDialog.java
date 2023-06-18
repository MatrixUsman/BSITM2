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
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.EditText;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatDialogFragment;

public class AddEditNoteDialog extends AppCompatDialogFragment {

    private EditText noteEditText;
    private String note;
    private int position;

    private AddEditNoteListener listener;

    public static AddEditNoteDialog newInstance(String note, int position) {
        AddEditNoteDialog dialog = new AddEditNoteDialog();
        Bundle args = new Bundle();
        args.putString("note", note);
        args.putInt("position", position);
        dialog.setArguments(args);
        return dialog;
    }

    @Override
    public void onAttach(@NonNull Context context) {
        super.onAttach(context);
        try {
            listener = (AddEditNoteListener) context;
        } catch (ClassCastException e) {
            throw new ClassCastException(context.toString() +
                    " must implement AddEditNoteListener");
        }
    }

    @NonNull
    @Override
    public Dialog onCreateDialog(@Nullable Bundle savedInstanceState) {
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());

        LayoutInflater inflater = getActivity().getLayoutInflater();
        View view = inflater.inflate(R.layout.dialog_add_edit_note, null);

        noteEditText = view.findViewById(R.id.noteEditText);

        Bundle args = getArguments();
        if (args != null) {
            note = args.getString("note");
            position = args.getInt("position");

            if (note != null)
                noteEditText.setText(note);
        }

        builder.setView(view)
                .setTitle((position == -1) ? "Add Note" : "Edit Note")
                .setPositiveButton("Save", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        String editedNote = noteEditText.getText().toString();
                        listener.onNoteAddedOrEdited(editedNote);
                    }
                })
                .setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        dialog.dismiss();
                    }
                });

        return builder.create();
    }

    public interface AddEditNoteListener {
        void onNoteAddedOrEdited(String note);
    }
}
