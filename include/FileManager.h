#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include "StudentManager.h"
#include "TeacherManager.h"
#include "CourseManager.h"
#include "DepartmentManager.h"

using namespace std;

class FileManager {
public:
    static void saveStudents(StudentManager& manager);
    static void loadStudents(StudentManager& manager);

    static void saveTeachers(TeacherManager& manager);
    static void loadTeachers(TeacherManager& manager);

    static void saveCourses(CourseManager& manager);
    static void loadCourses(CourseManager& manager);

    static void saveDepartments(DepartmentManager& manager);
    static void loadDepartments(DepartmentManager& manager);
};

#endif