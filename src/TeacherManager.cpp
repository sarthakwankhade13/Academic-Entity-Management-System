#include <iostream>
#include "../include/TeacherManager.h"

using namespace std;

TeacherManager::TeacherManager() {

    capacity = 5;
    count = 0;

    teachers = new Teacher[capacity];
}

void TeacherManager::increaseCapacity() {

    int newCapacity = capacity * 2;

    Teacher* newTeachers = new Teacher[newCapacity];

    for (int i = 0; i < count; i++) {
        newTeachers[i] = teachers[i];
    }

    delete[] teachers;

    teachers = newTeachers;
    capacity = newCapacity;
}

bool TeacherManager::teacherIdExists(int id) {

    for (int i = 0; i < count; i++) {

        if (teachers[i].getId() == id) {
            return true;
        }
    }

    return false;
}

void TeacherManager::addTeacher(Teacher teacher) {

    if (teacherIdExists(teacher.getId())) {
        cout << "Teacher ID already exists." << endl;
        return;
    }

    if (count == capacity) {
        increaseCapacity();
    }

    teachers[count] = teacher;
    count++;

    cout << "Teacher added successfully." << endl;
}

void TeacherManager::displayTeachers() {

    if (count == 0) {
        cout << "No teachers available." << endl;
        return;
    }

    cout << "\n===== Teacher List =====" << endl;

    for (int i = 0; i < count; i++) {
        teachers[i].display();
    }
}

void TeacherManager::searchTeacher(int id) {

    for (int i = 0; i < count; i++) {

        if (teachers[i].getId() == id) {

            cout << "\nTeacher found!" << endl;

            teachers[i].display();

            return;
        }
    }

    cout << "Teacher not found." << endl;
}

void TeacherManager::updateTeacher(int id) {

    for (int i = 0; i < count; i++) {

        if (teachers[i].getId() == id) {

            string name;
            string department;
            string email;
            string specialization;

            cin.ignore();

            cout << "Enter new name: ";
            getline(cin, name);

            cout << "Enter new department: ";
            getline(cin, department);

            cout << "Enter new email: ";
            getline(cin, email);

            cout << "Enter new specialization: ";
            getline(cin, specialization);

            if (name.empty() ||
                department.empty() ||
                email.empty() ||
                specialization.empty()) {

                cout << "Fields cannot be empty." << endl;
                return;
            }

            teachers[i].setName(name);
            teachers[i].setDepartment(department);
            teachers[i].setEmail(email);
            teachers[i].setSpecialization(specialization);

            cout << "Teacher updated successfully." << endl;

            return;
        }
    }

    cout << "Teacher not found." << endl;
}

void TeacherManager::deleteTeacher(int id) {

    for (int i = 0; i < count; i++) {

        if (teachers[i].getId() == id) {

            for (int j = i; j < count - 1; j++) {
                teachers[j] = teachers[j + 1];
            }

            count--;

            cout << "Teacher deleted successfully." << endl;

            return;
        }
    }

    cout << "Teacher not found." << endl;
}

TeacherManager::~TeacherManager() {
    delete[] teachers;
}
int TeacherManager::getCount() {
    return count;
}

Teacher TeacherManager::getTeacher(int index) {
    return teachers[index];
}