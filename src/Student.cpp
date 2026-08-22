#include <iostream>
#include "../include/Student.h"

using namespace std;

Student::Student() {
    id = 0;
    name = "";
    department = "";
    email = "";
    cgpa = 0.0;
}

Student::Student(int id, string name, string department, string email, float cgpa) {
    this->id = id;
    this->name = name;
    this->department = department;
    this->email = email;
    this->cgpa = cgpa;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setDepartment(string department) {
    this->department = department;
}

void Student::setEmail(string email) {
    this->email = email;
}

void Student::setCgpa(float cgpa) {
    this->cgpa = cgpa;
}

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

string Student::getDepartment() {
    return department;
}

string Student::getEmail() {
    return email;
}

float Student::getCgpa() {
    return cgpa;
}

void Student::display() {
    cout << "\nStudent Details" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Email: " << email << endl;
    cout << "CGPA: " << cgpa << endl;
}