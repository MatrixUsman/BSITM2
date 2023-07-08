const express = require("express");
const mysql = require("mysql");
const bodyParser = require("body-parser");

const app = express();
const port = 3000;

// MySQL Connection
const connection = mysql.createConnection({
    host: "localhost",
    port: 3306, // Replace with your desired port number
    user: "root",
    password: "13291329",
    database: "task_management",
});

// Create and initialize the database
connection.connect((err) => {
    if (err) throw err;
    console.log("Connected to MySQL server!");

    const createDatabaseQuery = "CREATE DATABASE IF NOT EXISTS task_management";
    connection.query(createDatabaseQuery, (error) => {
        if (error) throw error;
        console.log("Database created or already exists");

        const useDatabaseQuery = "USE task_management";
        connection.query(useDatabaseQuery, (error) => {
            if (error) throw error;
            console.log("Using task_management database");

            const createTableQuery = `CREATE TABLE IF NOT EXISTS tasks (
        id INT AUTO_INCREMENT PRIMARY KEY,
        name VARCHAR(255) NOT NULL,
        description VARCHAR(255) NOT NULL,
        due_date DATE NOT NULL
      )`;
            connection.query(createTableQuery, (error) => {
                if (error) throw error;
                console.log("Tasks table created or already exists");
            });
        });
    });
});

// Middleware
app.use(bodyParser.json());

// Routes
app.get("/tasks", (req, res) => {
    const selectQuery = "SELECT * FROM tasks";
    connection.query(selectQuery, (error, results) => {
        if (error) {
            console.error(error);
            res.status(500).send("Internal Server Error");
        } else {
            res.send(results);
        }
    });
});

app.post("/tasks", (req, res) => {
    const task = req.body;
    const insertQuery = "INSERT INTO tasks SET ?";
    connection.query(insertQuery, task, (error, result) => {
        if (error) {
            console.error(error);
            res.status(500).send("Internal Server Error");
        } else {
            res.send("Task created successfully!");
        }
    });
});

app.put("/tasks/:taskId", (req, res) => {
    const taskId = req.params.taskId;
    const updatedTask = req.body;
    const updateQuery = "UPDATE tasks SET ? WHERE id = ?";
    connection.query(updateQuery, [updatedTask, taskId], (error, result) => {
        if (error) {
            console.error(error);
            res.status(500).send("Internal Server Error");
        } else {
            res.send("Task updated successfully!");
        }
    });
});

app.delete("/tasks/:taskId", (req, res) => {
    const taskId = req.params.taskId;
    const deleteQuery = "DELETE FROM tasks WHERE id = ?";
    connection.query(deleteQuery, taskId, (error, result) => {
        if (error) {
            console.error(error);
            res.status(500).send("Internal Server Error");
        } else {
            res.send("Task deleted successfully!");
        }
    });
});

// Start the server
app.listen(port, () => {
    console.log(`Server is running on port ${port}`);
});