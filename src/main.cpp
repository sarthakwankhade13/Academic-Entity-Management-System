#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

int main() {

    StudentManager manager;

    Student student1(
        101,
        "Rahul",
        "Computer Science",
        "rahul@gmail.com",
        8.7
    );

    Student student2(
        102,
        "Amit",
        "Information Technology",
        "amit@gmail.com",
        8.5
    );

    manager.addStudent(student1);
    manager.addStudent(student2);

    manager.displayStudents();

    return 0;
}