package com.usman.TARAMysql;
import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.POST;

import java.util.List;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.DELETE;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.PUT;
import retrofit2.http.Path;

public interface ApiInterface {

    @GET("tasks")
    Call<List<Task>> getTasks();

    @POST("tasks")
    Call<Task> createTask(@Body Task task);

    @PUT("tasks/{taskId}")
    Call<Task> updateTask(@Path("taskId") int taskId, @Body Task task);

    @DELETE("tasks/{taskId}")
    Call<Void> deleteTask(@Path("taskId") int taskId);
}
