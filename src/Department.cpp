#include <iostream>
#include "../include/Department.h"

using namespace std;

Department::Department() {

    id = 0;
    name = "";
    headName = "";
}

Department::Department(int id, string name, string headName) {

    this->id = id;
    this->name = name;
    this->headName = headName;
}

void Department::setId(int id) {
    this->id = id;
}

void Department::setName(string name) {
    this->name = name;
}

void Department::setHeadName(string headName) {
    this->headName = headName;
}

int Department::getId() {
    return id;
}

string Department::getName() {
    return name;
}

string Department::getHeadName() {
    return headName;
}

void Department::display() {

    cout << "\nDepartment Details" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Head: " << headName << endl;
}