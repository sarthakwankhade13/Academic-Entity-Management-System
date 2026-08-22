#include <iostream>
#include "../include/Course.h"

using namespace std;

Course::Course() {

    id = 0;
    name = "";
    department = "";
    credits = 0;
}

Course::Course(int id, string name, string department, int credits) {

    this->id = id;
    this->name = name;
    this->department = department;
    this->credits = credits;
}

void Course::setId(int id) {
    this->id = id;
}

void Course::setName(string name) {
    this->name = name;
}

void Course::setDepartment(string department) {
    this->department = department;
}

void Course::setCredits(int credits) {
    this->credits = credits;
}

int Course::getId() {
    return id;
}

string Course::getName() {
    return name;
}

string Course::getDepartment() {
    return department;
}

int Course::getCredits() {
    return credits;
}

void Course::display() {

    cout << "\nCourse Details" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Credits: " << credits << endl;
}