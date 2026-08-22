#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

int main() {

    StudentManager manager;

    manager.addStudent(
        Student(101, "Rahul", "Computer Science",
                "rahul@gmail.com", 8.7)
    );

    manager.addStudent(
        Student(102, "Amit", "Information Technology",
                "amit@gmail.com", 8.5)
    );

    manager.addStudent(
        Student(103, "Priya", "Computer Science",
                "priya@gmail.com", 9.1)
    );

    manager.addStudent(
        Student(104, "Neha", "Electronics",
                "neha@gmail.com", 8.8)
    );

    manager.addStudent(
        Student(105, "Rohit", "Mechanical",
                "rohit@gmail.com", 8.2)
    );

    manager.addStudent(
        Student(106, "Sneha", "Computer Science",
                "sneha@gmail.com", 9.0)
    );

    manager.displayStudents();

    return 0;
}