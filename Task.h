#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string title;
    bool completed;

public:
    // Constructor
    Task(std::string t);

    // Mark the task as completed
    void complete();

    // Display task status
    void display() const;
};

#endif
