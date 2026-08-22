#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

using namespace std;

class Department {
private:
    int id;
    string name;
    string headName;

public:
    Department();
    Department(int id, string name, string headName);

    void setId(int id);
    void setName(string name);
    void setHeadName(string headName);

    int getId();
    string getName();
    string getHeadName();

    void display();
};

#endif