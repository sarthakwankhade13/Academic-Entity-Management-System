#ifndef ACADEMIC_ENTITY_H
#define ACADEMIC_ENTITY_H

#include <string>

using namespace std;

class AcademicEntity {
private:
    int id;
    string name;

public:
    AcademicEntity();
    AcademicEntity(int id, string name);

    void setId(int id);
    void setName(string name);

    int getId();
    string getName();

    void display();
};

#endif