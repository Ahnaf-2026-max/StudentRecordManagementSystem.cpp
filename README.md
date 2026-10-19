# C++ Student Record Management System

## 📌 Overview
The C++ Student Record Management System is a simple, menu-driven console application developed using C++. It allows users to add student information, view all student records, and search for a student using their ID.

This project is designed for beginners to practice fundamental C++ programming concepts.

## ✨ Features
- **Add Student:** Enter a student's ID, name, and marks.
- **View All Students:** Display all student records currently stored in the program.
- **Search Student by ID:** Find a student using their unique ID.
- **Exit:** Close the program through the menu.

## 🧠 How It Works
1. The program displays a menu with four options.
2. The user selects an option.
3. To add a student, the program asks for the student's ID, name, and marks.
4. To view students, the program displays all stored records.
5. To search, the program asks for an ID and checks whether a matching student exists.
6. The program continues displaying the menu until the user chooses to exit.

## 💻 Concepts Used
- C++ input and output (`cin`, `cout`)
- Variables and data types
- Structures (`struct`) for student information
- `vector` to store student records
- `string` to store student names
- Loops (`do-while`, `for`)
- Conditional statements (`if-else`)
- Searching using a loop
- `getline()` for reading student names

## 🛠️ Technologies
- **Language:** C++
- **Libraries:** `iostream`, `vector`, `string`
- **IDE:** Code::Blocks or any C++-compatible IDE

## ▶️ How to Run

1. Download or clone this repository.
2. Open the C++ source file in Code::Blocks or another C++ IDE.
3. Build and run the program.
4. Select an option from the menu and follow the instructions.

### Compile using GCC

If your source file is named `main.cpp`, open a terminal in the project folder and run:

```bash
g++ main.cpp -o student_records
```

On Windows, run:

```bash
student_records.exe
```

Replace `main.cpp` with your actual source filename if it is different.

## 📷 Example Menu

```text
--- Student Record System ---
1. Add Student
2. View All Students
3. Search Student by ID
4. Exit
Enter your choice:
```

## ⚠️ Limitations
- Student records are stored in memory using a vector.
- Records are lost when the program exits.
- The program does not currently support updating or deleting student records.
- Duplicate student IDs are not checked.

## 🚀 Future Improvements
- Save student records to a file.
- Load previously saved records when the program starts.
- Prevent duplicate student IDs.
- Add input validation for IDs and marks.
- Add options to update or delete student records.

## 👨‍💻 Author
**Ahnaf-2026-max**

GitHub: https://github.com/Ahnaf-2026-max

## 📄 License
This project is licensed under the MIT License. See the `LICENSE` file for details.
