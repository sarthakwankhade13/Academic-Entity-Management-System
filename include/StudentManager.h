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

    bool studentIdExists(int id);

    void addStudent(Student student);
    void displayStudents();
    void searchStudent(int id);
    void updateStudent(int id);
    void deleteStudent(int id);

    ~StudentManager();
};

#endif