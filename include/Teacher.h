#ifndef TEACHER_H
#define TEACHER_H

#include <string>

using namespace std;

class Teacher {
private:
    int id;
    string name;
    string department;
    string email;
    string specialization;

public:
    Teacher();
    Teacher(int id, string name, string department,
            string email, string specialization);

    void setId(int id);
    void setName(string name);
    void setDepartment(string department);
    void setEmail(string email);
    void setSpecialization(string specialization);

    int getId();
    string getName();
    string getDepartment();
    string getEmail();
    string getSpecialization();

    void display();
};

#endif