//StudentRecordManagementSystem
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    double marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;

            cout << "Enter student ID: ";
            cin >> s.id;

            cin.ignore();
            cout << "Enter student name: ";
            getline(cin, s.name);

            cout << "Enter marks: ";
            cin >> s.marks;

            students.push_back(s);

            cout << "Student added successfully!\n";
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records found.\n";
            } else {
                for (const Student &s : students) {
                    cout << "\nID: " << s.id << '\n';
                    cout << "Name: " << s.name << '\n';
                    cout << "Marks: " << s.marks << '\n';
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            bool found = false;

            cout << "Enter ID to search: ";
            cin >> searchId;

            for (const Student &s : students) {
                if (s.id == searchId) {
                    cout << "Student found!\n";
                    cout << "Name: " << s.name << '\n';
                    cout << "Marks: " << s.marks << '\n';
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
