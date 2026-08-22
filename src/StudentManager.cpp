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

    cout << "Student storage increased to "
         << capacity << "." << endl;
}

bool StudentManager::studentIdExists(int id) {

    for (int i = 0; i < count; i++) {

        if (students[i].getId() == id) {
            return true;
        }
    }

    return false;
}

void StudentManager::addStudent(Student student) {

    if (studentIdExists(student.getId())) {
        cout << "Student ID already exists." << endl;
        return;
    }

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

            if (name.empty()) {
                cout << "Name cannot be empty." << endl;
                return;
            }

            cout << "Enter new department: ";
            getline(cin, department);

            if (department.empty()) {
                cout << "Department cannot be empty." << endl;
                return;
            }

            cout << "Enter new email: ";
            getline(cin, email);

            if (email.empty()) {
                cout << "Email cannot be empty." << endl;
                return;
            }

            cout << "Enter new CGPA: ";
            cin >> cgpa;

            if (cgpa < 0 || cgpa > 10) {
                cout << "Invalid CGPA. It must be between 0 and 10."
                     << endl;
                return;
            }

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