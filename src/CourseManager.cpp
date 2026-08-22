#include <iostream>
#include "../include/CourseManager.h"

using namespace std;

CourseManager::CourseManager() {

    capacity = 5;
    count = 0;

    courses = new Course[capacity];
}

void CourseManager::increaseCapacity() {

    int newCapacity = capacity * 2;

    Course* newCourses = new Course[newCapacity];

    for (int i = 0; i < count; i++) {
        newCourses[i] = courses[i];
    }

    delete[] courses;

    courses = newCourses;
    capacity = newCapacity;
}

bool CourseManager::courseIdExists(int id) {

    for (int i = 0; i < count; i++) {

        if (courses[i].getId() == id) {
            return true;
        }
    }

    return false;
}

void CourseManager::addCourse(Course course) {

    if (courseIdExists(course.getId())) {
        cout << "Course ID already exists." << endl;
        return;
    }

    if (count == capacity) {
        increaseCapacity();
    }

    courses[count] = course;
    count++;

    cout << "Course added successfully." << endl;
}

void CourseManager::displayCourses() {

    if (count == 0) {
        cout << "No courses available." << endl;
        return;
    }

    cout << "\n===== Course List =====" << endl;

    for (int i = 0; i < count; i++) {
        courses[i].display();
    }
}

void CourseManager::searchCourse(int id) {

    for (int i = 0; i < count; i++) {

        if (courses[i].getId() == id) {

            cout << "\nCourse found!" << endl;

            courses[i].display();

            return;
        }
    }

    cout << "Course not found." << endl;
}

void CourseManager::updateCourse(int id) {

    for (int i = 0; i < count; i++) {

        if (courses[i].getId() == id) {

            string name;
            string department;
            int credits;

            cin.ignore();

            cout << "Enter new course name: ";
            getline(cin, name);

            cout << "Enter new department: ";
            getline(cin, department);

            cout << "Enter new credits: ";
            cin >> credits;

            if (name.empty() || department.empty()) {
                cout << "Fields cannot be empty." << endl;
                return;
            }

            if (credits <= 0) {
                cout << "Credits must be positive." << endl;
                return;
            }

            courses[i].setName(name);
            courses[i].setDepartment(department);
            courses[i].setCredits(credits);

            cout << "Course updated successfully." << endl;

            return;
        }
    }

    cout << "Course not found." << endl;
}

void CourseManager::deleteCourse(int id) {

    for (int i = 0; i < count; i++) {

        if (courses[i].getId() == id) {

            for (int j = i; j < count - 1; j++) {
                courses[j] = courses[j + 1];
            }

            count--;

            cout << "Course deleted successfully." << endl;

            return;
        }
    }

    cout << "Course not found." << endl;
}

CourseManager::~CourseManager() {
    delete[] courses;
}int CourseManager::getCount() {
    return count;
}

Course CourseManager::getCourse(int index) {
    return courses[index];
}