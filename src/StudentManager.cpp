#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

StudentManager::StudentManager() {
    capacity = 5;
    count = 0;

    students = new Student[capacity];
}

void StudentManager::addStudent(Student student) {

    if (count == capacity) {
        cout << "Student storage is full." << endl;
        return;
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