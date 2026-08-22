#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "Student.h"

class StudentManager {
private:
    Student* students;
    int count;
    int capacity;

    void increaseCapacity();

public:
    StudentManager();

    void addStudent(Student student);
    void displayStudents();

    ~StudentManager();
};

#endif