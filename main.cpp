#include <iostream>
#include "TaskManager.h"

using namespace std;

int main() {
    TaskManager taskManager;
    int choice;
    string taskTitle;

    do {
        cout << "\nTask Manager\n";
        cout << "1. Add Task\n";
        cout << "2. Display Tasks\n";
        cout << "3. Complete a Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task title: ";
                cin.ignore();
                getline(cin, taskTitle);
                taskManager.addTask(taskTitle);
                break;

            case 2:
                taskManager.displayTasks();
                break;

            case 3:
                int taskNumber;
                cout << "Enter task number to complete: ";
                cin >> taskNumber;
                taskManager.completeTask(taskNumber);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
