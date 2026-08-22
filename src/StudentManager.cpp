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

StudentManager::~StudentManager() {
    delete[] students;
}