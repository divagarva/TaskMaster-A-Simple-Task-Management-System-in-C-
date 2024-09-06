#include "TaskManager.h"
#include <iostream>

using namespace std;

// Add a task to the list
void TaskManager::addTask(const string& taskTitle) {
    tasks.emplace_back(taskTitle);
}

// Display all tasks
void TaskManager::displayTasks() const {
    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        tasks[i].display();
    }
}

// Complete a task by its number
void TaskManager::completeTask(int taskNumber) {
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].complete();
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}
