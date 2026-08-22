#include <iostream>

#include "../include/StudentManager.h"
#include "../include/TeacherManager.h"
#include "../include/CourseManager.h"
#include "../include/DepartmentManager.h"

using namespace std;

void studentMenu(StudentManager& manager) {

    int choice;

    while (true) {

        cout << "\n===============================" << endl;
        cout << "       STUDENT MANAGEMENT" << endl;
        cout << "===============================" << endl;

        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            int id;
            string name;
            string department;
            string email;
            float cgpa;

            cout << "\nEnter Student ID: ";
            cin >> id;

            if (id <= 0) {
                cout << "Student ID must be positive." << endl;
                continue;
            }

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name);

            if (name.empty()) {
                cout << "Name cannot be empty." << endl;
                continue;
            }

            cout << "Enter Department: ";
            getline(cin, department);

            if (department.empty()) {
                cout << "Department cannot be empty." << endl;
                continue;
            }

            cout << "Enter Email: ";
            getline(cin, email);

            if (email.empty()) {
                cout << "Email cannot be empty." << endl;
                continue;
            }

            cout << "Enter CGPA: ";
            cin >> cgpa;

            if (cgpa < 0 || cgpa > 10) {
                cout << "CGPA must be between 0 and 10." << endl;
                continue;
            }

            Student student(
                id,
                name,
                department,
                email,
                cgpa
            );

            manager.addStudent(student);
        }

        else if (choice == 2) {
            manager.displayStudents();
        }

        else if (choice == 3) {

            int id;

            cout << "Enter Student ID to search: ";
            cin >> id;

            manager.searchStudent(id);
        }

        else if (choice == 4) {

            int id;

            cout << "Enter Student ID to update: ";
            cin >> id;

            manager.updateStudent(id);
        }

        else if (choice == 5) {

            int id;

            cout << "Enter Student ID to delete: ";
            cin >> id;

            manager.deleteStudent(id);
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }
}


void teacherMenu(TeacherManager& manager) {

    int choice;

    while (true) {

        cout << "\n===============================" << endl;
        cout << "       TEACHER MANAGEMENT" << endl;
        cout << "===============================" << endl;

        cout << "1. Add Teacher" << endl;
        cout << "2. View Teachers" << endl;
        cout << "3. Search Teacher" << endl;
        cout << "4. Update Teacher" << endl;
        cout << "5. Delete Teacher" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            int id;
            string name;
            string department;
            string email;
            string specialization;

            cout << "\nEnter Teacher ID: ";
            cin >> id;

            if (id <= 0) {
                cout << "Teacher ID must be positive." << endl;
                continue;
            }

            cin.ignore();

            cout << "Enter Teacher Name: ";
            getline(cin, name);

            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter Email: ";
            getline(cin, email);

            cout << "Enter Specialization: ";
            getline(cin, specialization);

            if (name.empty() ||
                department.empty() ||
                email.empty() ||
                specialization.empty()) {

                cout << "Fields cannot be empty." << endl;
                continue;
            }

            Teacher teacher(
                id,
                name,
                department,
                email,
                specialization
            );

            manager.addTeacher(teacher);
        }

        else if (choice == 2) {
            manager.displayTeachers();
        }

        else if (choice == 3) {

            int id;

            cout << "Enter Teacher ID to search: ";
            cin >> id;

            manager.searchTeacher(id);
        }

        else if (choice == 4) {

            int id;

            cout << "Enter Teacher ID to update: ";
            cin >> id;

            manager.updateTeacher(id);
        }

        else if (choice == 5) {

            int id;

            cout << "Enter Teacher ID to delete: ";
            cin >> id;

            manager.deleteTeacher(id);
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }
}


void courseMenu(CourseManager& manager) {

    int choice;

    while (true) {

        cout << "\n===============================" << endl;
        cout << "        COURSE MANAGEMENT" << endl;
        cout << "===============================" << endl;

        cout << "1. Add Course" << endl;
        cout << "2. View Courses" << endl;
        cout << "3. Search Course" << endl;
        cout << "4. Update Course" << endl;
        cout << "5. Delete Course" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            int id;
            string name;
            string department;
            int credits;

            cout << "\nEnter Course ID: ";
            cin >> id;

            if (id <= 0) {
                cout << "Course ID must be positive." << endl;
                continue;
            }

            cin.ignore();

            cout << "Enter Course Name: ";
            getline(cin, name);

            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter Credits: ";
            cin >> credits;

            if (name.empty() || department.empty()) {
                cout << "Fields cannot be empty." << endl;
                continue;
            }

            if (credits <= 0) {
                cout << "Credits must be positive." << endl;
                continue;
            }

            Course course(
                id,
                name,
                department,
                credits
            );

            manager.addCourse(course);
        }

        else if (choice == 2) {
            manager.displayCourses();
        }

        else if (choice == 3) {

            int id;

            cout << "Enter Course ID to search: ";
            cin >> id;

            manager.searchCourse(id);
        }

        else if (choice == 4) {

            int id;

            cout << "Enter Course ID to update: ";
            cin >> id;

            manager.updateCourse(id);
        }

        else if (choice == 5) {

            int id;

            cout << "Enter Course ID to delete: ";
            cin >> id;

            manager.deleteCourse(id);
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }
}


void departmentMenu(DepartmentManager& manager) {

    int choice;

    while (true) {

        cout << "\n================================" << endl;
        cout << "      DEPARTMENT MANAGEMENT" << endl;
        cout << "================================" << endl;

        cout << "1. Add Department" << endl;
        cout << "2. View Departments" << endl;
        cout << "3. Search Department" << endl;
        cout << "4. Update Department" << endl;
        cout << "5. Delete Department" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            int id;
            string name;
            string headName;

            cout << "\nEnter Department ID: ";
            cin >> id;

            if (id <= 0) {
                cout << "Department ID must be positive." << endl;
                continue;
            }

            cin.ignore();

            cout << "Enter Department Name: ";
            getline(cin, name);

            cout << "Enter Department Head: ";
            getline(cin, headName);

            if (name.empty() || headName.empty()) {
                cout << "Fields cannot be empty." << endl;
                continue;
            }

            Department department(
                id,
                name,
                headName
            );

            manager.addDepartment(department);
        }

        else if (choice == 2) {
            manager.displayDepartments();
        }

        else if (choice == 3) {

            int id;

            cout << "Enter Department ID to search: ";
            cin >> id;

            manager.searchDepartment(id);
        }

        else if (choice == 4) {

            int id;

            cout << "Enter Department ID to update: ";
            cin >> id;

            manager.updateDepartment(id);
        }

        else if (choice == 5) {

            int id;

            cout << "Enter Department ID to delete: ";
            cin >> id;

            manager.deleteDepartment(id);
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }
}

int main() {

    StudentManager studentManager;
    TeacherManager teacherManager;
    CourseManager courseManager;
    DepartmentManager departmentManager;

    FileManager::loadStudents(studentManager);
    FileManager::loadTeachers(teacherManager);
    FileManager::loadCourses(courseManager);
    FileManager::loadDepartments(departmentManager);

    int choice;

    while (true) {

        cout << "\n=========================================" << endl;
        cout << "    ACADEMIC ENTITY MANAGEMENT SYSTEM" << endl;
        cout << "=========================================" << endl;

        cout << "1. Student Management" << endl;
        cout << "2. Teacher Management" << endl;
        cout << "3. Course Management" << endl;
        cout << "4. Department Management" << endl;
        cout << "5. Save Data" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            studentMenu(studentManager);
        }

        else if (choice == 2) {
            teacherMenu(teacherManager);
        }

        else if (choice == 3) {
            courseMenu(courseManager);
        }

        else if (choice == 4) {
            departmentMenu(departmentManager);
        }

        else if (choice == 5) {

            FileManager::saveStudents(studentManager);
            FileManager::saveTeachers(teacherManager);
            FileManager::saveCourses(courseManager);
            FileManager::saveDepartments(departmentManager);
        }

        else if (choice == 6) {

            FileManager::saveStudents(studentManager);
            FileManager::saveTeachers(teacherManager);
            FileManager::saveCourses(courseManager);
            FileManager::saveDepartments(departmentManager);

            cout << "Data saved." << endl;
            cout << "Exiting application..." << endl;

            break;
        }

        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}