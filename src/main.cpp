#include <iostream>
#include "../include/Student.h"

using namespace std;

int main() {

    Student student(
        101,
        "Rahul",
        "Computer Science",
        "rahul@gmail.com",
        8.7
    );

    student.display();

    return 0;
}