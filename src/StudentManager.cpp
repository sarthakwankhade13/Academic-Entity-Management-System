#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

StudentManager::StudentManager() {
    capacity = 5;
    count = 0;

    students = new Student[capacity];
}

void StudentManager::increaseCapacity() {

    int newCapacity = capacity * 2;

    Student* newStudents = new Student[newCapacity];

    for (int i = 0; i < count; i++) {
        newStudents[i] = students[i];
    }

    delete[] students;

    students = newStudents;
    capacity = newCapacity;
}

void StudentManager::addStudent(Student student) {

    if (count == capacity) {
        increaseCapacity();
    }

    students[count] = student;
    count++;

    cout << "Student added successfully." << endl;
}

void StudentManager::displayStudents() {

    if (count == 0) {
        cout << "No students available." << endl;
        return;
    }

    cout << "\n===== Student List =====" << endl;

    for (int i = 0; i < count; i++) {
        students[i].display();
    }
}

void StudentManager::searchStudent(int id) {

    for (int i = 0; i < count; i++) {

        if (students[i].getId() == id) {
            cout << "\nStudent found!" << endl;
            students[i].display();
            return;
        }
    }

    cout << "Student not found." << endl;
}

void StudentManager::updateStudent(int id) {

    for (int i = 0; i < count; i++) {

        if (students[i].getId() == id) {

            string name;
            string department;
            string email;
            float cgpa;

            cin.ignore();

            cout << "Enter new name: ";
            getline(cin, name);

            cout << "Enter new department: ";
            getline(cin, department);

            cout << "Enter new email: ";
            getline(cin, email);

            cout << "Enter new CGPA: ";
            cin >> cgpa;

            students[i].setName(name);
            students[i].setDepartment(department);
            students[i].setEmail(email);
            students[i].setCgpa(cgpa);

            cout << "Student updated successfully." << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}

void StudentManager::deleteStudent(int id) {

    for (int i = 0; i < count; i++) {

        if (students[i].getId() == id) {

            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;

            cout << "Student deleted successfully." << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}

StudentManager::~StudentManager() {
    delete[] students;
}