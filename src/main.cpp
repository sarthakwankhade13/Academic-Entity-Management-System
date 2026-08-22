#include <iostream>
#include "../include/AcademicEntity.h"

using namespace std;

void displayMainMenu() {
    cout << "\n=========================================\n";
    cout << "    ACADEMIC ENTITY MANAGEMENT SYSTEM\n";
    cout << "=========================================\n";
    cout << "1. Student Management\n";
    cout << "2. Teacher Management\n";
    cout << "3. Course Management\n";
    cout << "4. Department Management\n";
    cout << "5. Exit\n";
    cout << "=========================================\n";
    cout << "Enter your choice: ";
}

int main() {

    AcademicEntity entity(101, "Rahul");

    cout << "\nAcademic Entity Details\n";
    entity.display();

    return 0;
}