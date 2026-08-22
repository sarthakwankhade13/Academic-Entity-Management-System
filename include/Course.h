#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

class Course {
private:
    int id;
    string name;
    string department;
    int credits;

public:
    Course();
    Course(int id, string name, string department, int credits);

    void setId(int id);
    void setName(string name);
    void setDepartment(string department);
    void setCredits(int credits);

    int getId();
    string getName();
    string getDepartment();
    int getCredits();

    void display();
};

#endif