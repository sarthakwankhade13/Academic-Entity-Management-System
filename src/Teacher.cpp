#include <iostream>
#include "../include/Teacher.h"

using namespace std;

Teacher::Teacher() {
    id = 0;
    name = "";
    department = "";
    email = "";
    specialization = "";
}

Teacher::Teacher(int id, string name, string department,
                 string email, string specialization) {

    this->id = id;
    this->name = name;
    this->department = department;
    this->email = email;
    this->specialization = specialization;
}

void Teacher::setId(int id) {
    this->id = id;
}

void Teacher::setName(string name) {
    this->name = name;
}

void Teacher::setDepartment(string department) {
    this->department = department;
}

void Teacher::setEmail(string email) {
    this->email = email;
}

void Teacher::setSpecialization(string specialization) {
    this->specialization = specialization;
}

int Teacher::getId() {
    return id;
}

string Teacher::getName() {
    return name;
}

string Teacher::getDepartment() {
    return department;
}

string Teacher::getEmail() {
    return email;
}

string Teacher::getSpecialization() {
    return specialization;
}

void Teacher::display() {

    cout << "\nTeacher Details" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Email: " << email << endl;
    cout << "Specialization: " << specialization << endl;
}