#include <iostream>

using namespace std;

void displayMainMenu() {
    cout << "\n=========================================\n";
    cout << "    ACADEMIC ENTITY MANAGEMENT SYSTEM\n";
    cout << "=========================================\n";
    cout << "1. Student Management\n";
    cout << "2. Teacher Management\n";
    cout << "3. Course Management\n";
    cout << "4. Department Management\n";
    cout << "5. Exit\n";
    cout << "=========================================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    while (true) {
        displayMainMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Student Management selected.\n";
                break;

            case 2:
                cout << "Teacher Management selected.\n";
                break;

            case 3:
                cout << "Course Management selected.\n";
                break;

            case 4:
                cout << "Department Management selected.\n";
                break;

            case 5:
                cout << "Exiting application...\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}