#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;
    string department;
    string email;
    float cgpa;

public:
    Student();
    Student(int id, string name, string department, string email, float cgpa);

    void setId(int id);
    void setName(string name);
    void setDepartment(string department);
    void setEmail(string email);
    void setCgpa(float cgpa);

    int getId();
    string getName();
    string getDepartment();
    string getEmail();
    float getCgpa();

    void display();
};

#endif