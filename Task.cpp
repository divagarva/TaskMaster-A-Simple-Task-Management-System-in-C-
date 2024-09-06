#include "Task.h"
#include <iostream>

using namespace std;

// Constructor
Task::Task(string t) : title(t), completed(false) {}

// Mark the task as completed
void Task::complete() {
    completed = true;
}

// Display task status
void Task::display() const {
    cout << title << " - " << (completed ? "Completed" : "Not Completed") << endl;
}
