#ifndef DEPARTMENT_MANAGER_H
#define DEPARTMENT_MANAGER_H

#include "Department.h"

class DepartmentManager {
private:
    Department* departments;
    int count;
    int capacity;

    void increaseCapacity();

public:
    DepartmentManager();

    bool departmentIdExists(int id);

    void addDepartment(Department department);
    void displayDepartments();
    void searchDepartment(int id);
    void updateDepartment(int id);
    void deleteDepartment(int id);

    int getCount();
    Department getDepartment(int index);

    ~DepartmentManager();
};

#endif