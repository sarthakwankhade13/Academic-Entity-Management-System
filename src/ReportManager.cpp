#include <iostream>
#include "../include/ReportManager.h"

using namespace std;

void ReportManager::showSummary(
    StudentManager& students,
    TeacherManager& teachers,
    CourseManager& courses,
    DepartmentManager& departments
) {

    cout << "\n=========================================" << endl;
    cout << "          SYSTEM SUMMARY" << endl;
    cout << "=========================================" << endl;

    cout << "Total Students    : "
         << students.getCount() << endl;

    cout << "Total Teachers    : "
         << teachers.getCount() << endl;

    cout << "Total Courses     : "
         << courses.getCount() << endl;

    cout << "Total Departments : "
         << departments.getCount() << endl;

    cout << "=========================================" << endl;
}


void ReportManager::showStudentReport(StudentManager& students) {

    cout << "\n========== STUDENT REPORT ==========" << endl;

    if (students.getCount() == 0) {
        cout << "No students available." << endl;
        return;
    }

    float totalCgpa = 0;

    for (int i = 0; i < students.getCount(); i++) {

        Student student = students.getStudent(i);

        totalCgpa += student.getCgpa();
    }

    float averageCgpa =
        totalCgpa / students.getCount();

    cout << "Total Students : "
         << students.getCount() << endl;

    cout << "Average CGPA   : "
         << averageCgpa << endl;
}


void ReportManager::showTeacherReport(TeacherManager& teachers) {

    cout << "\n========== TEACHER REPORT ==========" << endl;

    if (teachers.getCount() == 0) {
        cout << "No teachers available." << endl;
        return;
    }

    cout << "Total Teachers : "
         << teachers.getCount() << endl;

    cout << "\nTeacher List:" << endl;

    for (int i = 0; i < teachers.getCount(); i++) {

        Teacher teacher =
            teachers.getTeacher(i);

        cout << i + 1 << ". "
             << teacher.getName()
             << " - "
             << teacher.getDepartment()
             << endl;
    }
}


void ReportManager::showCourseReport(CourseManager& courses) {

    cout << "\n========== COURSE REPORT ==========" << endl;

    if (courses.getCount() == 0) {
        cout << "No courses available." << endl;
        return;
    }

    int totalCredits = 0;

    for (int i = 0; i < courses.getCount(); i++) {

        Course course =
            courses.getCourse(i);

        totalCredits += course.getCredits();
    }

    cout << "Total Courses : "
         << courses.getCount() << endl;

    cout << "Total Credits : "
         << totalCredits << endl;
}


void ReportManager::showDepartmentReport(
    DepartmentManager& departments
) {

    cout << "\n========== DEPARTMENT REPORT ==========" << endl;

    if (departments.getCount() == 0) {
        cout << "No departments available." << endl;
        return;
    }

    cout << "Total Departments : "
         << departments.getCount() << endl;

    cout << "\nDepartment List:" << endl;

    for (int i = 0; i < departments.getCount(); i++) {

        Department department =
            departments.getDepartment(i);

        cout << i + 1 << ". "
             << department.getName()
             << " - Head: "
             << department.getHeadName()
             << endl;
    }
}