#include <iostream>

#include "../include/StudentManager.h"
#include "../include/TeacherManager.h"
#include "../include/CourseManager.h"
#include "../include/DepartmentManager.h"
#include "../include/FileManager.h"
#include "../include/ReportManager.h"

using namespace std;


// ======================================================
// STUDENT MENU
// ======================================================

void studentMenu(StudentManager& manager) {

    int choice;

    while (true) {

        cout << "\n================================" << endl;
        cout << "       STUDENT MANAGEMENT" << endl;
        cout << "================================" << endl;

        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";

        if (!(cin >> choice)) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }


        // ADD STUDENT
        if (choice == 1) {

            int id;
            string name;
            string department;
            string email;
            float cgpa;


            cout << "\nEnter Student ID: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


            if (id <= 0) {

                cout << "Student ID must be positive." << endl;

                continue;
            }


            cin.ignore(1000, '\n');


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

            if (!(cin >> cgpa)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


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


        // VIEW STUDENTS
        else if (choice == 2) {

            manager.displayStudents();
        }


        // SEARCH STUDENT
        else if (choice == 3) {

            int id;

            cout << "Enter Student ID to search: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.searchStudent(id);
        }


        // UPDATE STUDENT
        else if (choice == 4) {

            int id;

            cout << "Enter Student ID to update: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.updateStudent(id);
        }


        // DELETE STUDENT
        else if (choice == 5) {

            int id;

            cout << "Enter Student ID to delete: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.deleteStudent(id);
        }


        // BACK
        else if (choice == 6) {

            break;
        }


        else {

            cout << "Invalid choice." << endl;
        }
    }
}


// ======================================================
// TEACHER MENU
// ======================================================

void teacherMenu(TeacherManager& manager) {

    int choice;

    while (true) {

        cout << "\n================================" << endl;
        cout << "       TEACHER MANAGEMENT" << endl;
        cout << "================================" << endl;

        cout << "1. Add Teacher" << endl;
        cout << "2. View Teachers" << endl;
        cout << "3. Search Teacher" << endl;
        cout << "4. Update Teacher" << endl;
        cout << "5. Delete Teacher" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";

        if (!(cin >> choice)) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }


        // ADD TEACHER
        if (choice == 1) {

            int id;

            string name;
            string department;
            string email;
            string specialization;


            cout << "\nEnter Teacher ID: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


            if (id <= 0) {

                cout << "Teacher ID must be positive." << endl;

                continue;
            }


            cin.ignore(1000, '\n');


            cout << "Enter Teacher Name: ";
            getline(cin, name);


            cout << "Enter Department: ";
            getline(cin, department);


            cout << "Enter Email: ";
            getline(cin, email);


            cout << "Enter Specialization: ";
            getline(cin, specialization);


            if (
                name.empty() ||
                department.empty() ||
                email.empty() ||
                specialization.empty()
            ) {

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


        // VIEW TEACHERS
        else if (choice == 2) {

            manager.displayTeachers();
        }


        // SEARCH TEACHER
        else if (choice == 3) {

            int id;

            cout << "Enter Teacher ID to search: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.searchTeacher(id);
        }


        // UPDATE TEACHER
        else if (choice == 4) {

            int id;

            cout << "Enter Teacher ID to update: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.updateTeacher(id);
        }


        // DELETE TEACHER
        else if (choice == 5) {

            int id;

            cout << "Enter Teacher ID to delete: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.deleteTeacher(id);
        }


        // BACK
        else if (choice == 6) {

            break;
        }


        else {

            cout << "Invalid choice." << endl;
        }
    }
}


// ======================================================
// COURSE MENU
// ======================================================

void courseMenu(CourseManager& manager) {

    int choice;

    while (true) {

        cout << "\n================================" << endl;
        cout << "        COURSE MANAGEMENT" << endl;
        cout << "================================" << endl;

        cout << "1. Add Course" << endl;
        cout << "2. View Courses" << endl;
        cout << "3. Search Course" << endl;
        cout << "4. Update Course" << endl;
        cout << "5. Delete Course" << endl;
        cout << "6. Back" << endl;

        cout << "Enter your choice: ";

        if (!(cin >> choice)) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }


        // ADD COURSE
        if (choice == 1) {

            int id;
            string name;
            string department;
            int credits;


            cout << "\nEnter Course ID: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


            if (id <= 0) {

                cout << "Course ID must be positive." << endl;

                continue;
            }


            cin.ignore(1000, '\n');


            cout << "Enter Course Name: ";
            getline(cin, name);


            cout << "Enter Department: ";
            getline(cin, department);


            cout << "Enter Credits: ";

            if (!(cin >> credits)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


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


        // VIEW COURSES
        else if (choice == 2) {

            manager.displayCourses();
        }


        // SEARCH COURSE
        else if (choice == 3) {

            int id;

            cout << "Enter Course ID to search: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.searchCourse(id);
        }


        // UPDATE COURSE
        else if (choice == 4) {

            int id;

            cout << "Enter Course ID to update: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.updateCourse(id);
        }


        // DELETE COURSE
        else if (choice == 5) {

            int id;

            cout << "Enter Course ID to delete: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.deleteCourse(id);
        }


        // BACK
        else if (choice == 6) {

            break;
        }


        else {

            cout << "Invalid choice." << endl;
        }
    }
}


// ======================================================
// DEPARTMENT MENU
// ======================================================

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

        if (!(cin >> choice)) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }


        // ADD DEPARTMENT
        if (choice == 1) {

            int id;

            string name;
            string headName;


            cout << "\nEnter Department ID: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


            if (id <= 0) {

                cout << "Department ID must be positive." << endl;

                continue;
            }


            cin.ignore(1000, '\n');


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


        // VIEW DEPARTMENTS
        else if (choice == 2) {

            manager.displayDepartments();
        }


        // SEARCH DEPARTMENT
        else if (choice == 3) {

            int id;

            cout << "Enter Department ID to search: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.searchDepartment(id);
        }


        // UPDATE DEPARTMENT
        else if (choice == 4) {

            int id;

            cout << "Enter Department ID to update: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.updateDepartment(id);
        }


        // DELETE DEPARTMENT
        else if (choice == 5) {

            int id;

            cout << "Enter Department ID to delete: ";

            if (!(cin >> id)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }

            manager.deleteDepartment(id);
        }


        // BACK
        else if (choice == 6) {

            break;
        }


        else {

            cout << "Invalid choice." << endl;
        }
    }
}


// ======================================================
// MAIN FUNCTION
// ======================================================

int main() {

    StudentManager studentManager;
    TeacherManager teacherManager;
    CourseManager courseManager;
    DepartmentManager departmentManager;


    // ==================================================
    // LOAD SAVED DATA
    // ==================================================

    FileManager::loadStudents(studentManager);

    FileManager::loadTeachers(teacherManager);

    FileManager::loadCourses(courseManager);

    FileManager::loadDepartments(departmentManager);


    int choice;


    // ==================================================
    // MAIN MENU
    // ==================================================

    while (true) {

        cout << "\n=========================================" << endl;
        cout << "    ACADEMIC ENTITY MANAGEMENT SYSTEM" << endl;
        cout << "=========================================" << endl;

        cout << "1. Student Management" << endl;
        cout << "2. Teacher Management" << endl;
        cout << "3. Course Management" << endl;
        cout << "4. Department Management" << endl;
        cout << "5. Reports" << endl;
        cout << "6. Save Data" << endl;
        cout << "7. Exit" << endl;

        cout << "\nEnter your choice: ";


        if (!(cin >> choice)) {

            cout << "Invalid input. Please enter a number." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }


        // ==================================================
        // STUDENT
        // ==================================================

        if (choice == 1) {

            studentMenu(studentManager);
        }


        // ==================================================
        // TEACHER
        // ==================================================

        else if (choice == 2) {

            teacherMenu(teacherManager);
        }


        // ==================================================
        // COURSE
        // ==================================================

        else if (choice == 3) {

            courseMenu(courseManager);
        }


        // ==================================================
        // DEPARTMENT
        // ==================================================

        else if (choice == 4) {

            departmentMenu(departmentManager);
        }


        // ==================================================
        // REPORTS
        // ==================================================

        else if (choice == 5) {

            ReportManager::showSummary(
                studentManager,
                teacherManager,
                courseManager,
                departmentManager
            );


            cout << "\n================================" << endl;
            cout << "          REPORT MENU" << endl;
            cout << "================================" << endl;

            cout << "1. Student Report" << endl;
            cout << "2. Teacher Report" << endl;
            cout << "3. Course Report" << endl;
            cout << "4. Department Report" << endl;
            cout << "5. Back" << endl;


            int reportChoice;


            cout << "Enter choice: ";


            if (!(cin >> reportChoice)) {

                cout << "Invalid input. Please enter a number." << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                continue;
            }


            if (reportChoice == 1) {

                ReportManager::showStudentReport(
                    studentManager
                );
            }


            else if (reportChoice == 2) {

                ReportManager::showTeacherReport(
                    teacherManager
                );
            }


            else if (reportChoice == 3) {

                ReportManager::showCourseReport(
                    courseManager
                );
            }


            else if (reportChoice == 4) {

                ReportManager::showDepartmentReport(
                    departmentManager
                );
            }


            else if (reportChoice == 5) {

                continue;
            }


            else {

                cout << "Invalid report choice." << endl;
            }
        }


        // ==================================================
        // SAVE DATA
        // ==================================================

        else if (choice == 6) {

            FileManager::saveStudents(studentManager);

            FileManager::saveTeachers(teacherManager);

            FileManager::saveCourses(courseManager);

            FileManager::saveDepartments(departmentManager);


            cout << "\nAll data saved successfully." << endl;
        }


        // ==================================================
        // EXIT
        // ==================================================

        else if (choice == 7) {

            cout << "\nSaving data before exit..." << endl;


            FileManager::saveStudents(studentManager);

            FileManager::saveTeachers(teacherManager);

            FileManager::saveCourses(courseManager);

            FileManager::saveDepartments(departmentManager);


            cout << "Data saved successfully." << endl;

            cout << "Thank you for using the system!" << endl;


            break;
        }


        else {

            cout << "Invalid choice. Please try again." << endl;
        }
    }


    return 0;
}