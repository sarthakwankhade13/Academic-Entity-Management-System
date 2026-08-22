#ifndef REPORT_MANAGER_H
#define REPORT_MANAGER_H

#include "StudentManager.h"
#include "TeacherManager.h"
#include "CourseManager.h"
#include "DepartmentManager.h"

using namespace std;

class ReportManager {
public:

    static void showSummary(
        StudentManager& students,
        TeacherManager& teachers,
        CourseManager& courses,
        DepartmentManager& departments
    );

    static void showStudentReport(StudentManager& students);
    static void showTeacherReport(TeacherManager& teachers);
    static void showCourseReport(CourseManager& courses);
    static void showDepartmentReport(DepartmentManager& departments);
};

#endif