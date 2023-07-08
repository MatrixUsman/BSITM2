package com.usman.TARAMysql;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import java.util.List;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class MainActivity extends AppCompatActivity {

    private EditText etTaskId, etTaskName, etTaskDescription, etTaskDueDate;
    private Button btnAddTask, btnGetTasks, btnUpdateTask, btnDeleteTask;

    private ApiInterface apiInterface;
    private RecyclerView recyclerView;
    private TaskAdapter taskAdapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        recyclerView = findViewById(R.id.recycler_view);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));
        taskAdapter = new TaskAdapter();
        recyclerView.setAdapter(taskAdapter);

        apiInterface = ApiClient.getClient().create(ApiInterface.class);

        etTaskId = findViewById(R.id.et_task_id);
        etTaskName = findViewById(R.id.et_task_name);
        etTaskDescription = findViewById(R.id.et_task_description);
        etTaskDueDate = findViewById(R.id.et_task_due_date);
        btnAddTask = findViewById(R.id.btn_add_task);
        btnGetTasks = findViewById(R.id.btn_get_tasks);
        btnUpdateTask = findViewById(R.id.btn_update_task);
        btnDeleteTask = findViewById(R.id.btn_delete_task);

        btnAddTask.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String taskName = etTaskName.getText().toString().trim();
                String taskDescription = etTaskDescription.getText().toString().trim();
                String taskDueDate = etTaskDueDate.getText().toString().trim();

                Task newTask = new Task(taskName, taskDescription, taskDueDate);

                Call<Task> call = apiInterface.createTask(newTask);
                call.enqueue(new Callback<Task>() {
                    @Override
                    public void onResponse(Call<Task> call, Response<Task> response) {
                        if (response.isSuccessful()) {
                            etTaskName.getText().clear();
                            etTaskDescription.getText().clear();
                            etTaskDueDate.getText().clear();

                            Toast.makeText(MainActivity.this, "Task added successfully!", Toast.LENGTH_SHORT).show();
                        } else {
                            Toast.makeText(MainActivity.this, "Failed to add task. Please try again.", Toast.LENGTH_SHORT).show();
                        }
                    }

                    @Override
                    public void onFailure(Call<Task> call, Throwable t) {
                        Log.e("API Error", t.getMessage());
                        Toast.makeText(MainActivity.this, "Failed to add task. Please try again.", Toast.LENGTH_SHORT).show();
                    }
                });
            }
        });

        btnGetTasks.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Call<List<Task>> call = apiInterface.getTasks();
                call.enqueue(new Callback<List<Task>>() {
                    @Override
                    public void onResponse(Call<List<Task>> call, Response<List<Task>> response) {
                        if (response.isSuccessful()) {
                            List<Task> tasks = response.body();
                            taskAdapter.setTasks(tasks);
                            taskAdapter.notifyDataSetChanged();
                        } else {
                            Toast.makeText(MainActivity.this, "Failed to get tasks. Please try again.", Toast.LENGTH_SHORT).show();
                        }
                    }

                    @Override
                    public void onFailure(Call<List<Task>> call, Throwable t) {
                        Log.e("API Error", t.getMessage());
                        Toast.makeText(MainActivity.this, "Failed to get tasks. Please try again.", Toast.LENGTH_SHORT).show();
                    }
                });
            }
        });btnUpdateTask.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String taskIdString = etTaskId.getText().toString().trim();
                int taskId = Integer.parseInt(taskIdString);

                String taskName = etTaskName.getText().toString().trim();
                String taskDescription = etTaskDescription.getText().toString().trim();
                String taskDueDate = etTaskDueDate.getText().toString().trim();

                Task updatedTask = new Task(taskName, taskDescription, taskDueDate);

                Call<Task> call = apiInterface.updateTask(taskId, updatedTask);
                call.enqueue(new Callback<Task>() {
                    @Override
                    public void onResponse(Call<Task> call, Response<Task> response) {
                        if (response.isSuccessful()) {
                            etTaskId.getText().clear();
                            etTaskName.getText().clear();
                            etTaskDescription.getText().clear();
                            etTaskDueDate.getText().clear();

                            Toast.makeText(MainActivity.this, "Task updated successfully!", Toast.LENGTH_SHORT).show();
                        } else {
                            Toast.makeText(MainActivity.this, "Failed to update task. Please try again.", Toast.LENGTH_SHORT).show();
                        }
                    }

                    @Override
                    public void onFailure(Call<Task> call, Throwable t) {
                        Log.e("API Error", t.getMessage());
                        Toast.makeText(MainActivity.this, "Failed to update task. Please try again.", Toast.LENGTH_SHORT).show();
                    }
                });
            }
        });


    }
        }
