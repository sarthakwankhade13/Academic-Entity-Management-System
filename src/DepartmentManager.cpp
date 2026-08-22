#include <iostream>
#include "../include/DepartmentManager.h"

using namespace std;

DepartmentManager::DepartmentManager() {

    capacity = 5;
    count = 0;

    departments = new Department[capacity];
}

void DepartmentManager::increaseCapacity() {

    int newCapacity = capacity * 2;

    Department* newDepartments = new Department[newCapacity];

    for (int i = 0; i < count; i++) {
        newDepartments[i] = departments[i];
    }

    delete[] departments;

    departments = newDepartments;
    capacity = newCapacity;
}

bool DepartmentManager::departmentIdExists(int id) {

    for (int i = 0; i < count; i++) {

        if (departments[i].getId() == id) {
            return true;
        }
    }

    return false;
}

void DepartmentManager::addDepartment(Department department) {

    if (departmentIdExists(department.getId())) {
        cout << "Department ID already exists." << endl;
        return;
    }

    if (count == capacity) {
        increaseCapacity();
    }

    departments[count] = department;
    count++;

    cout << "Department added successfully." << endl;
}

void DepartmentManager::displayDepartments() {

    if (count == 0) {
        cout << "No departments available." << endl;
        return;
    }

    cout << "\n===== Department List =====" << endl;

    for (int i = 0; i < count; i++) {
        departments[i].display();
    }
}

void DepartmentManager::searchDepartment(int id) {

    for (int i = 0; i < count; i++) {

        if (departments[i].getId() == id) {

            cout << "\nDepartment found!" << endl;

            departments[i].display();

            return;
        }
    }

    cout << "Department not found." << endl;
}

void DepartmentManager::updateDepartment(int id) {

    for (int i = 0; i < count; i++) {

        if (departments[i].getId() == id) {

            string name;
            string headName;

            cin.ignore();

            cout << "Enter new department name: ";
            getline(cin, name);

            cout << "Enter new head name: ";
            getline(cin, headName);

            if (name.empty() || headName.empty()) {
                cout << "Fields cannot be empty." << endl;
                return;
            }

            departments[i].setName(name);
            departments[i].setHeadName(headName);

            cout << "Department updated successfully." << endl;

            return;
        }
    }

    cout << "Department not found." << endl;
}

void DepartmentManager::deleteDepartment(int id) {

    for (int i = 0; i < count; i++) {

        if (departments[i].getId() == id) {

            for (int j = i; j < count - 1; j++) {
                departments[j] = departments[j + 1];
            }

            count--;

            cout << "Department deleted successfully." << endl;

            return;
        }
    }

    cout << "Department not found." << endl;
}

DepartmentManager::~DepartmentManager() {
    delete[] departments;
}
int DepartmentManager::getCount() {
    return count;
}

Department DepartmentManager::getDepartment(int index) {
    return departments[index];
}