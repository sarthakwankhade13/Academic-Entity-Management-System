# 🎓 Academic Entity Management System

<p align="center">
  A modular, console-based C++ application for managing Students, Teachers, Courses, and Departments.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C++-17-blue?style=for-the-badge&logo=cplusplus" alt="C++17">
  <img src="https://img.shields.io/badge/OOP-Implemented-orange?style=for-the-badge" alt="OOP">
  <img src="https://img.shields.io/badge/File%20Handling-Implemented-green?style=for-the-badge" alt="File Handling">
  <img src="https://img.shields.io/badge/CRUD-Operations-purple?style=for-the-badge" alt="CRUD">
  <img src="https://img.shields.io/badge/Git-GitHub-black?style=for-the-badge&logo=github" alt="Git">
</p>

---

## 📌 About the Project

The **Academic Entity Management System** is a C++ console application designed to manage academic information in a structured and modular way.

The system manages four major academic entities:

- 👨‍🎓 Students
- 👨‍🏫 Teachers
- 📚 Courses
- 🏢 Departments

Each entity has its own class and manager class, keeping the application organized and separating data representation from management logic.

The project also provides **persistent file storage**, allowing data to be saved and loaded between program executions.

---

## ✨ Features

### 👨‍🎓 Student Management

- Add student
- View all students
- Search student by ID
- Update student
- Delete student
- CGPA validation
- Duplicate ID handling

Student information:

```text
Student ID
Name
Department
Email
CGPA
👨‍🏫 Teacher Management
Add teacher
View all teachers
Search teacher by ID
Update teacher
Delete teacher
Duplicate ID handling

Teacher information:

Teacher ID
Name
Department
Email
Specialization
📚 Course Management
Add course
View all courses
Search course by ID
Update course
Delete course
Credit validation

Course information:

Course ID
Course Name
Department
Credits
🏢 Department Management
Add department
View all departments
Search department by ID
Update department
Delete department

Department information:

Department ID
Department Name
Department Head
📊 Reporting

The system provides basic reports and summaries for:

Students
Teachers
Courses
Departments

Example:

================================
        ACADEMIC REPORT
================================

Total Students     : 10
Total Teachers     : 10
Total Courses      : 10
Total Departments  : 10
💾 Data Persistence

The application uses C++ file handling to permanently store academic data.

data/
├── students.txt
├── teachers.txt
├── courses.txt
└── departments.txt
Data Flow
User Input
    ↓
Manager Class
    ↓
Entity Object
    ↓
In-Memory Data
    ↓
FileManager
    ↓
Text File

When the application starts, previously saved data is loaded from the files.

When data is saved, the current data is written back to the files.

🔄 CRUD Operations

Complete CRUD operations are implemented for all major entities.

Entity	Create	Read	Update	Delete
Student	✅	✅	✅	✅
Teacher	✅	✅	✅	✅
Course	✅	✅	✅	✅
Department	✅	✅	✅	✅
🧠 Concepts Used
Object-Oriented Programming
Classes and Objects
Encapsulation
Inheritance
Polymorphism
Constructors
Destructors
Memory Management
Dynamic memory allocation
Pointers
References
Memory cleanup
STL
vector
string
Iterators
File Handling
ifstream
ofstream
File reading
File writing
Persistent storage
Software Design
Modular programming
Header/source separation
Manager classes
Separation of concerns
CRUD architecture
Input validation
Error handling
🏗️ System Architecture
                    ┌──────────────────────┐
                    │       main.cpp       │
                    │    User Interface    │
                    └──────────┬───────────┘
                               │
              ┌────────────────┼────────────────┐
              ↓                ↓                ↓
      ┌──────────────┐ ┌──────────────┐ ┌──────────────┐
      │   Student    │ │   Teacher    │ │    Course    │
      │   Manager    │ │   Manager    │ │   Manager    │
      └──────┬───────┘ └──────┬───────┘ └──────┬───────┘
             │                │                │
             └────────────────┼────────────────┘
                              ↓
                     ┌─────────────────┐
                     │   FileManager   │
                     └────────┬────────┘
                              ↓
                       ┌─────────────┐
                       │ Data Files  │
                       └─────────────┘
📂 Project Structure
Academic-Entity-Management-System/
│
├── include/
│   ├── AcademicEntity.h
│   ├── Student.h
│   ├── StudentManager.h
│   ├── Teacher.h
│   ├── TeacherManager.h
│   ├── Course.h
│   ├── CourseManager.h
│   ├── Department.h
│   ├── DepartmentManager.h
│   ├── FileManager.h
│   └── ReportManager.h
│
├── src/
│   ├── main.cpp
│   ├── AcademicEntity.cpp
│   ├── Student.cpp
│   ├── StudentManager.cpp
│   ├── Teacher.cpp
│   ├── TeacherManager.cpp
│   ├── Course.cpp
│   ├── CourseManager.cpp
│   ├── Department.cpp
│   ├── DepartmentManager.cpp
│   ├── FileManager.cpp
│   └── ReportManager.cpp
│
├── data/
│   ├── students.txt
│   ├── teachers.txt
│   ├── courses.txt
│   └── departments.txt
│
├── README.md
└── .gitignore
🖥️ Application Menu
=========================================
    ACADEMIC ENTITY MANAGEMENT SYSTEM
=========================================

1. Student Management
2. Teacher Management
3. Course Management
4. Department Management
5. Reports
6. Save Data
7. Exit
🔍 Input Validation

The system handles invalid and unexpected user input.

Example:

Enter Student ID: abc

Invalid input. Please enter a number.
Enter Student ID: -10

Student ID must be positive.
Enter CGPA: 15

CGPA must be between 0 and 10.
Enter Credits: -5

Credits must be positive.

This helps prevent invalid data and input-loop problems.

⚙️ Requirements
Windows / Linux / macOS
C++ compiler
GCC / MinGW
Git

Recommended:

C++17
🚀 How to Run
1. Clone the Repository
git clone https://github.com/sarthakwankhade13/Academic-Entity-Management-System.git
2. Enter the Project
cd Academic-Entity-Management-System
3. Compile
g++ src/main.cpp src/AcademicEntity.cpp src/Student.cpp src/StudentManager.cpp src/Teacher.cpp src/TeacherManager.cpp src/Course.cpp src/CourseManager.cpp src/Department.cpp src/DepartmentManager.cpp src/FileManager.cpp src/ReportManager.cpp -o academic_system
4. Run on Windows
.\academic_system.exe
Run on Linux / macOS
./academic_system
🔮 Future Scope

The current console-based system can be extended with:

Database integration
User authentication
Role-based access
Graphical User Interface
Advanced search and filtering
Attendance management
Examination management
Student enrollment
REST API
Web-based frontend
👨‍💻 Designed & Developed By
Sarthak Wankhade

Computer Science Engineering Student
Vishwakarma Institute of Technology (VIT), Pune

Designed and developed using C++ to demonstrate practical implementation of Object-Oriented Programming, Dynamic Memory Allocation, File Handling, CRUD Operations, and Modular Software Design.
