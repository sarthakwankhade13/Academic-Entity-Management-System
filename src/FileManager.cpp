#include <iostream>
#include <fstream>

#include "../include/FileManager.h"

using namespace std;


// ================= STUDENT FILE =================

void FileManager::saveStudents(StudentManager& manager) {

    ofstream file("data/students.txt");

    if (!file) {
        cout << "Unable to open student file." << endl;
        return;
    }

    int count = manager.getCount();

    for (int i = 0; i < count; i++) {

        Student student = manager.getStudent(i);

        file << student.getId() << "|"
             << student.getName() << "|"
             << student.getDepartment() << "|"
             << student.getEmail() << "|"
             << student.getCgpa()
             << endl;
    }

    file.close();

    cout << "Students saved successfully." << endl;
}


void FileManager::loadStudents(StudentManager& manager) {

    ifstream file("data/students.txt");

    if (!file) {
        return;
    }

    int id;
    float cgpa;

    string name;
    string department;
    string email;

    while (file >> id) {

        file.ignore();

        getline(file, name, '|');
        getline(file, department, '|');
        getline(file, email, '|');

        file >> cgpa;

        Student student(
            id,
            name,
            department,
            email,
            cgpa
        );

        manager.addStudent(student);
    }

    file.close();
}


// ================= TEACHER FILE =================

void FileManager::saveTeachers(TeacherManager& manager) {

    ofstream file("data/teachers.txt");

    if (!file) {
        cout << "Unable to open teacher file." << endl;
        return;
    }

    int count = manager.getCount();

    for (int i = 0; i < count; i++) {

        Teacher teacher = manager.getTeacher(i);

        file << teacher.getId() << "|"
             << teacher.getName() << "|"
             << teacher.getDepartment() << "|"
             << teacher.getEmail() << "|"
             << teacher.getSpecialization()
             << endl;
    }

    file.close();

    cout << "Teachers saved successfully." << endl;
}


void FileManager::loadTeachers(TeacherManager& manager) {

    ifstream file("data/teachers.txt");

    if (!file) {
        return;
    }

    int id;

    string name;
    string department;
    string email;
    string specialization;

    while (file >> id) {

        file.ignore();

        getline(file, name, '|');
        getline(file, department, '|');
        getline(file, email, '|');
        getline(file, specialization);

        Teacher teacher(
            id,
            name,
            department,
            email,
            specialization
        );

        manager.addTeacher(teacher);
    }

    file.close();
}


// ================= COURSE FILE =================

void FileManager::saveCourses(CourseManager& manager) {

    ofstream file("data/courses.txt");

    if (!file) {
        cout << "Unable to open course file." << endl;
        return;
    }

    int count = manager.getCount();

    for (int i = 0; i < count; i++) {

        Course course = manager.getCourse(i);

        file << course.getId() << "|"
             << course.getName() << "|"
             << course.getDepartment() << "|"
             << course.getCredits()
             << endl;
    }

    file.close();

    cout << "Courses saved successfully." << endl;
}


void FileManager::loadCourses(CourseManager& manager) {

    ifstream file("data/courses.txt");

    if (!file) {
        return;
    }

    int id;
    int credits;

    string name;
    string department;

    while (file >> id) {

        file.ignore();

        getline(file, name, '|');
        getline(file, department, '|');

        file >> credits;

        Course course(
            id,
            name,
            department,
            credits
        );

        manager.addCourse(course);
    }

    file.close();
}


// ================= DEPARTMENT FILE =================

void FileManager::saveDepartments(
    DepartmentManager& manager
) {

    ofstream file("data/departments.txt");

    if (!file) {
        cout << "Unable to open department file." << endl;
        return;
    }

    int count = manager.getCount();

    for (int i = 0; i < count; i++) {

        Department department =
            manager.getDepartment(i);

        file << department.getId() << "|"
             << department.getName() << "|"
             << department.getHeadName()
             << endl;
    }

    file.close();

    cout << "Departments saved successfully." << endl;
}


void FileManager::loadDepartments(
    DepartmentManager& manager
) {

    ifstream file("data/departments.txt");

    if (!file) {
        return;
    }

    int id;

    string name;
    string headName;

    while (file >> id) {

        file.ignore();

        getline(file, name, '|');
        getline(file, headName);

        Department department(
            id,
            name,
            headName
        );

        manager.addDepartment(department);
    }

    file.close();
}
