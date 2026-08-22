#ifndef TEACHER_MANAGER_H
#define TEACHER_MANAGER_H

#include "Teacher.h"

class TeacherManager {
private:
    Teacher* teachers;
    int count;
    int capacity;

    void increaseCapacity();

public:
    TeacherManager();

    bool teacherIdExists(int id);

    void addTeacher(Teacher teacher);
    void displayTeachers();
    void searchTeacher(int id);
    void updateTeacher(int id);
    void deleteTeacher(int id);

    int getCount();
    Teacher getTeacher(int index);

    ~TeacherManager();
};

#endif