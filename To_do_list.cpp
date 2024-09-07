#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& todoList) {
    string description;
    cout << "Enter the task description: ";
    cin.ignore(); // To ignore the newline left in the input buffer
    getline(cin, description);
    todoList.push_back({description, false});
    cout << "Task added successfully." << endl;
}

void displayTasks(const vector<Task>& todoList) {
    if (todoList.empty()) {
        cout << "Your to-do list is empty." << endl;
        return;
    }

    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < todoList.size(); ++i) {
        cout << i + 1 << ". [" << (todoList[i].completed ? 'X' : ' ') << "] " << todoList[i].description << endl;
    }
}

void markTaskCompleted(vector<Task>& todoList) {
    int taskNumber;
    cout << "Enter the number of the task to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > todoList.size()) {
        cout << "Invalid task number." << endl;
    } else {
        todoList[taskNumber - 1].completed = true;
        cout << "Task marked as completed." << endl;
    }
}

void deleteTask(vector<Task>& todoList) {
    int taskNumber;
    cout << "Enter the number of the task to delete: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > todoList.size()) {
        cout << "Invalid task number." << endl;
    } else {
        todoList.erase(todoList.begin() + taskNumber - 1);
        cout << "Task deleted successfully." << endl;
    }
}

int main() {
    vector<Task> todoList;
    int choice;

    do {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. Display tasks" << endl;
        cout << "3. Mark a task as completed" << endl;
        cout << "4. Delete a task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(todoList);
                break;
            case 2:
                displayTasks(todoList);
                break;
            case 3:
                markTaskCompleted(todoList);
                break;
            case 4:
                deleteTask(todoList);
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
