#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    // Add a task
    void addTask(const std::string& taskTitle);

    // Display all tasks
    void displayTasks() const;

    // Complete a specific task
    void completeTask(int taskNumber);
};

#endif
