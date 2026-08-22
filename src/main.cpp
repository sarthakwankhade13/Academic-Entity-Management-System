#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

void studentMenu(StudentManager& manager) {

    int choice;

    while (true) {

        cout << "\n===============================" << endl;
        cout << "       STUDENT MANAGEMENT" << endl;
        cout << "===============================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Back" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 1) {

            int id;
            string name;
            string department;
            string email;
            float cgpa;

            cout << "\nEnter Student ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name);

            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter Email: ";
            getline(cin, email);

            cout << "Enter CGPA: ";
            cin >> cgpa;

            Student student(id, name, department, email, cgpa);

            manager.addStudent(student);
        }

        else if (choice == 2) {
            manager.displayStudents();
        }

        else if (choice == 3) {
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }
}

int main() {

    StudentManager studentManager;

    int choice;

    while (true) {

        cout << "\n=========================================" << endl;
        cout << "    ACADEMIC ENTITY MANAGEMENT SYSTEM" << endl;
        cout << "=========================================" << endl;
        cout << "1. Student Management" << endl;
        cout << "2. Teacher Management" << endl;
        cout << "3. Course Management" << endl;
        cout << "4. Department Management" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 1) {
            studentMenu(studentManager);
        }

        else if (choice == 2) {
            cout << "Teacher Management coming soon." << endl;
        }

        else if (choice == 3) {
            cout << "Course Management coming soon." << endl;
        }

        else if (choice == 4) {
            cout << "Department Management coming soon." << endl;
        }

        else if (choice == 5) {
            cout << "Exiting application..." << endl;
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}