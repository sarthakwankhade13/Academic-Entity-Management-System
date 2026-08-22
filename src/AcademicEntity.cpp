#include <iostream>
#include "../include/AcademicEntity.h"

using namespace std;

AcademicEntity::AcademicEntity() {
    id = 0;
    name = "";
}

AcademicEntity::AcademicEntity(int id, string name) {
    this->id = id;
    this->name = name;
}

void AcademicEntity::setId(int id) {
    this->id = id;
}

void AcademicEntity::setName(string name) {
    this->name = name;
}

int AcademicEntity::getId() {
    return id;
}

string AcademicEntity::getName() {
    return name;
}

void AcademicEntity::display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}