#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    string indexNumber;
    string phoneNumber;
    string program;
    int age;

    void inputStudentData() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student index number: ";
        cin >> indexNumber;
        cout << "Enter student telephone number: ";
        cin >> phoneNumber;
        cout << "Enter student program: ";
        cin.ignore();
        getline(cin, program);
        cout << "Enter student age: ";
        cin >> age;
    }

    void displayStudentData() {
        cout << "Name: " << name << endl;
        cout << "Index Number: " << indexNumber << endl;
        cout << "Telephone Number: " << phoneNumber << endl;
        cout << "Program: " << program << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student;
    char choice;

    do {
        cout << "1. Add student\n2. Display student details\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                student.inputStudentData();
                break;
            case '2':
                student.displayStudentData();
                break;
            case '3':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != '3');

    return 0;
}

