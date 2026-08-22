#ifndef COURSE_MANAGER_H
#define COURSE_MANAGER_H

#include "Course.h"

class CourseManager {
private:
    Course* courses;
    int count;
    int capacity;

    void increaseCapacity();

public:
    CourseManager();

    bool courseIdExists(int id);

    void addCourse(Course course);
    void displayCourses();
    void searchCourse(int id);
    void updateCourse(int id);
    void deleteCourse(int id);

    int getCount();
    Course getCourse(int index);

    ~CourseManager();
};

#endif