# 🎓 Academic Entity Management System

<div align="center">

A modular, console-based **C++** application for managing academic entities with complete CRUD operations, file persistence, and OOP principles.

[![C++17](https://img.shields.io/badge/C%2B%2B-17-blue?style=flat-square&logo=cplusplus)](https://en.wikipedia.org/wiki/C%2B%2B17)
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)
[![Build](https://img.shields.io/badge/Build-Passing-brightgreen?style=flat-square)](https://github.com/sarthakwankhade13/Academic-Entity-Management-System)

</div>

---

## 📋 Overview

The Academic Entity Management System is a comprehensive C++ application designed to manage four core academic entities within an institution. The system demonstrates professional software engineering practices including object-oriented design, dynamic memory management, file-based persistence, and complete CRUD operations.

### Core Entities
- 👨‍🎓 **Students** - Enrollment and academic tracking
- 👨‍🏫 **Teachers** - Faculty information and specializations
- 📚 **Courses** - Course catalog with credit tracking
- 🏢 **Departments** - Departmental organization

---

## ✨ Key Features

### Complete CRUD Operations
All four entities support full Create, Read, Update, and Delete operations with validation and error handling.

| Entity | Create | Read | Update | Delete | Search |
|--------|:------:|:----:|:------:|:------:|:------:|
| Student | ✅ | ✅ | ✅ | ✅ | ✅ |
| Teacher | ✅ | ✅ | ✅ | ✅ | ✅ |
| Course | ✅ | ✅ | ✅ | ✅ | ✅ |
| Department | ✅ | ✅ | ✅ | ✅ | ✅ |

### Data Persistence
- **File-based storage** using C++ file streams (ifstream/ofstream)
- Automatic data loading on startup
- Persistent storage between sessions
- Organized data directory structure

### Input Validation
- Type validation (numeric inputs)
- Range validation (CGPA: 0-10, Credits: positive)
- Duplicate ID prevention
- User-friendly error messages

### Academic Reporting
Quick system reports displaying:
- Total student count
- Total teacher count
- Total course count
- Total department count

---

## 🏗️ Architecture

```
┌─────────────────────┐
│    main.cpp         │
│  User Interface     │
└──────────┬──────────┘
           │
    ┌──────┴──────┬──────────┬──────────┐
    │             │          │          │
┌───▼──┐    ┌────▼───┐ ┌───▼────┐ ┌──▼─────┐
│Student│   │Teacher │ │Course  │ │Dept    │
│Manager│   │Manager │ │Manager │ │Manager │
└───┬──┘    └────┬───┘ └───┬────┘ └──┬─────┘
    │             │         │         │
    └─────────────┼─────────┼────────┘
                  │         │
              ┌───▼─────────▼────┐
              │  FileManager     │
              │  persistence     │
              └───┬──────────────┘
                  │
          ┌───────▼────────┐
          │  data/ *.txt   │
          └────────────────┘
```

---

## 📂 Project Structure

```
Academic-Entity-Management-System/
│
├── include/                           # Header files
│   ├── AcademicEntity.h              # Base entity class
│   ├── Student.h, StudentManager.h
│   ├── Teacher.h, TeacherManager.h
│   ├── Course.h, CourseManager.h
│   ├── Department.h, DepartmentManager.h
│   ├── FileManager.h                 # Persistence layer
│   └── ReportManager.h               # Reporting module
│
├── src/                              # Implementation files
│   ├── main.cpp                      # Entry point & UI
│   ├── *Manager.cpp                  # Entity managers
│   ├── FileManager.cpp               # File I/O
│   └── ReportManager.cpp             # Report generation
│
├── data/                             # Persistent storage
│   ├── students.txt
│   ├── teachers.txt
│   ├── courses.txt
│   └── departments.txt
│
└── README.md
```

---

## 🧠 C++ Concepts Implemented

### Object-Oriented Programming
- **Classes & Objects** - Encapsulation of entity data and behavior
- **Inheritance** - `AcademicEntity` base class for all entities
- **Polymorphism** - Virtual methods for common operations
- **Constructors & Destructors** - Proper initialization and cleanup

### Memory Management
- **Dynamic Memory Allocation** - Pointers for flexible data structures
- **STL Containers** - `std::vector` for entity collections
- **String Handling** - `std::string` for text fields
- **Smart Resource Management** - Proper cleanup and deallocation

### File Handling & Persistence
- **File Streams** - `ifstream` for reading, `ofstream` for writing
- **Serialization** - Converting objects to/from text format
- **Error Handling** - File operation validation

### Software Design Patterns
- **Manager Pattern** - Dedicated managers for each entity type
- **Separation of Concerns** - Data (entity) vs. logic (manager) vs. storage (file)
- **Modular Architecture** - Independent, reusable components

---

## ⚙️ Requirements

### Minimum
- **OS**: Windows / Linux / macOS
- **Compiler**: GCC / MinGW / Clang
- **C++ Standard**: C++11 or later (C++17 recommended)
- **Build Tool**: Manual compilation with g++ or equivalent

### Recommended
- **C++17** standard for best compatibility
- 50 MB free disk space for source and data files

---

## 🚀 Getting Started

### 1. Clone the Repository
```bash
git clone https://github.com/sarthakwankhade13/Academic-Entity-Management-System.git
cd Academic-Entity-Management-System
```

### 2. Compile the Project

**Linux/macOS:**
```bash
g++ -std=c++17 -o academic_system src/main.cpp src/AcademicEntity.cpp \
  src/Student.cpp src/StudentManager.cpp src/Teacher.cpp src/TeacherManager.cpp \
  src/Course.cpp src/CourseManager.cpp src/Department.cpp src/DepartmentManager.cpp \
  src/FileManager.cpp src/ReportManager.cpp
```

**Windows (MinGW):**
```cmd
g++ -std=c++17 -o academic_system.exe src/*.cpp
```

### 3. Run the Application

**Linux/macOS:**
```bash
./academic_system
```

**Windows:**
```cmd
academic_system.exe
```

### 4. Follow the Interactive Menu
```
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
```

---

## 📊 Entity Details

### Student
- Student ID (unique)
- Name
- Department
- Email
- CGPA (0-10 validation)

### Teacher
- Teacher ID (unique)
- Name
- Department
- Email
- Specialization

### Course
- Course ID (unique)
- Course Name
- Department
- Credits (positive validation)

### Department
- Department ID (unique)
- Department Name
- Department Head

---

## 🔮 Future Enhancements

- Database integration (SQL-based persistence)
- User authentication & role-based access control
- Advanced search and filtering capabilities
- Graphical User Interface (GUI)
- Attendance & examination management
- Student enrollment tracking
- REST API for external integrations
- Web-based dashboard

---

## 📝 Technical Highlights

✅ **Object-Oriented Design** - Clean class hierarchies and abstraction  
✅ **Dynamic Memory Management** - Efficient use of pointers and allocation  
✅ **File I/O & Persistence** - Reliable data storage and retrieval  
✅ **Input Validation** - Robust error handling and user input checks  
✅ **Modular Architecture** - Scalable and maintainable codebase  
✅ **STL Usage** - Vectors, strings, and iterators for data structures  

---

<div align="center">

### Designed & Developed By

**Sarthak Wankhade**

*Computer Science Engineering Student*  
*Vishwakarma Institute of Technology (VIT), Pune*

---

Built with ❤️ to demonstrate practical C++ applications of OOP, memory management, file handling, CRUD operations, and modular software design.

</div>
