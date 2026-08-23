# 🎓 Academic Entity Management System

<p align="center">

A modular, console-based **C++ Academic Management System** designed to manage Students, Teachers, Courses, and Departments using **Object-Oriented Programming, Dynamic Memory Allocation, File Handling, and CRUD operations**.

</p>

<p align="center">

![C++](https://img.shields.io/badge/C++-17-blue?style=for-the-badge&logo=cplusplus)
![OOP](https://img.shields.io/badge/OOP-Implemented-orange?style=for-the-badge)
![File Handling](https://img.shields.io/badge/File%20Handling-Implemented-green?style=for-the-badge)
![CRUD](https://img.shields.io/badge/CRUD-Operations-purple?style=for-the-badge)
![GitHub](https://img.shields.io/badge/GitHub-Version%20Controlled-black?style=for-the-badge&logo=github)

</p>

---

## 📌 About The Project

The **Academic Entity Management System** is a C++ console application developed to efficiently manage academic information.

The system provides separate management modules for:

- 👨‍🎓 Students
- 👨‍🏫 Teachers
- 📚 Courses
- 🏢 Departments

The project focuses on applying core C++ concepts in a practical software project rather than implementing them only as individual programs.

It uses a modular architecture where different entities have their own classes and manager classes responsible for handling operations.

---

# 🎯 Project Objectives

The main objectives of this project are:

- Apply Object-Oriented Programming in a real-world application.
- Implement CRUD operations.
- Use dynamic memory allocation.
- Implement persistent file storage.
- Build reusable and modular C++ classes.
- Implement input validation.
- Handle invalid user input safely.
- Generate academic reports.
- Understand separation of concerns.
- Practice Git and GitHub version control.

---

# ✨ Key Features

## 👨‍🎓 Student Management

The Student Management module provides:

- Add Student
- View All Students
- Search Student
- Update Student
- Delete Student
- Student ID validation
- CGPA validation
- Duplicate ID handling

Example student information:

```text
Student ID
Name
Department
Email
CGPA
👨‍🏫 Teacher Management

The Teacher Management module provides:

Add Teacher
View All Teachers
Search Teacher
Update Teacher
Delete Teacher
Teacher ID validation
Duplicate ID handling

Example:

Teacher ID
Name
Department
Email
Specialization
📚 Course Management

The Course Management module provides:

Add Course
View All Courses
Search Course
Update Course
Delete Course
Course ID validation
Credit validation

Example:

Course ID
Course Name
Department
Credits
🏢 Department Management

The Department Management module provides:

Add Department
View All Departments
Search Department
Update Department
Delete Department

Example:

Department ID
Department Name
Department Head
📊 Reporting System

The project includes a reporting module that provides summaries of the academic entities.

Reports include:

Student Report
Teacher Report
Course Report
Department Report
Overall entity statistics

Example:

================================
        ACADEMIC REPORT
================================

Total Students     : 10
Total Teachers     : 10
Total Courses      : 10
Total Departments  : 10
💾 File Handling

The system supports persistent data storage using C++ file streams.

Data is stored inside the data/ directory.

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

When the application starts:

Text File
    ↓
FileManager
    ↓
Manager
    ↓
Application

This allows data to remain available even after restarting the program.

🔄 CRUD Operations

The system implements complete CRUD operations.

        ┌──────────────┐
        │    CREATE    │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │     READ     │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │    UPDATE    │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │    DELETE    │
        └──────────────┘

CRUD operations are implemented for:

Entity	Create	Read	Update	Delete
Student	✅	✅	✅	✅
Teacher	✅	✅	✅	✅
Course	✅	✅	✅	✅
Department	✅	✅	✅	✅
🧠 C++ Concepts Used

This project demonstrates several important C++ concepts.

Object-Oriented Programming
Classes
Objects
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
String handling
Iterators
File Handling
ifstream
ofstream
File reading
File writing
Data persistence
Programming Concepts
Functions
Header files
Source files
Modular programming
Input validation
Error handling
CRUD operations
🏗️ System Architecture

The project follows a modular architecture.

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

The application provides a simple command-line interface.

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

Enter your choice:
🔍 Input Validation

The application handles common invalid inputs.

Examples:

Invalid ID
Enter Student ID: abc

Invalid input. Please enter a number.
Negative ID
Enter Student ID: -10

Student ID must be positive.
Invalid CGPA
Enter CGPA: 15

CGPA must be between 0 and 10.
Invalid Credits
Enter Credits: -5

Credits must be positive.

This prevents the application from entering an infinite input loop.

⚙️ Requirements

To run the project, you need:

Windows / Linux / macOS
C++ compiler
GCC / MinGW
Git
Command Line / Terminal

Recommended compiler:

g++ with C++17 support
🚀 How To Run
1. Clone the Repository
git clone https://github.com/sarthakwankhade13/Academic-Entity-Management-System.git
2. Enter the Project
cd Academic-Entity-Management-System
3. Compile
g++ src/main.cpp src/AcademicEntity.cpp src/Student.cpp src/StudentManager.cpp src/Teacher.cpp src/TeacherManager.cpp src/Course.cpp src/CourseManager.cpp src/Department.cpp src/DepartmentManager.cpp src/FileManager.cpp src/ReportManager.cpp -o academic_system
4. Run
Windows
.\academic_system.exe
Linux / macOS
./academic_system
💡 Example Workflow

A typical workflow looks like:

Start Application
       ↓
Load Existing Data
       ↓
Select Entity
       ↓
Perform CRUD Operation
       ↓
Generate Report
       ↓
Save Data
       ↓
Exit
🧪 Testing

The application was tested for:

Adding records
Viewing records
Searching records
Updating records
Deleting records
Duplicate IDs
Invalid numeric input
Invalid CGPA
Invalid credits
File saving
File loading
Data persistence
Multiple records
Invalid menu choices
📈 Future Improvements

The current project is console-based, but it can be extended into a complete academic management platform.

Planned Improvements
🔐 User authentication
👥 Role-based access control
🗄️ MySQL database integration
🌐 REST API
🖥️ Graphical User Interface
📊 Advanced analytics dashboard
🔎 Advanced search and filtering
📑 PDF report generation
📅 Attendance management
📝 Examination management
🎓 Student enrollment
📚 Subject registration
☁️ Cloud deployment
🎓 Learning Outcomes

Through this project, the following concepts were practiced:

C++ Fundamentals
       ↓
Object-Oriented Programming
       ↓
Dynamic Memory Management
       ↓
Modular Architecture
       ↓
CRUD Operations
       ↓
File Handling
       ↓
Input Validation
       ↓
Report Generation
       ↓
Git & GitHub
---

## 👨‍💻 Designed & Developed By

### **Sarthak Wankhade**

**Computer Science Engineering Student**  
**Vishwakarma Institute of Technology (VIT), Pune**

> Designed and developed with C++ to demonstrate practical implementation of Object-Oriented Programming, Dynamic Memory Allocation, File Handling, CRUD Operations, and Modular Software Design.

---

<p align="center">

### ⭐ Academic Entity Management System

**Developed by Sarthak Wankhade**  
**Vishwakarma Institute of Technology Pune**

</p>

<p align="center">
Made with ❤️ using C++
</p>

---
