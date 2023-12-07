// Write cpp program to overload insertion & extraction operator take student name, id, and marksand display these.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    float marks;

public:
    // Constructor to initialize data members
    Student() : id(0), marks(0.0) {}

    // Overloading insertion operator (<<)
    friend ostream& operator<<(ostream& outStream, const Student& student) {
        outStream << "Name: " << student.name << endl;
        outStream << "ID: " << student.id << endl;
        outStream << "Marks: " << student.marks << endl;
        return outStream;
    }

    // Overloading extraction operator (>>)
    friend istream& operator>>(istream& inStream, Student& student) {
        cout << "Enter name: ";
        inStream >> student.name;
        cout << "Enter ID: ";
        inStream >> student.id;
        cout << "Enter marks: ";
        inStream >> student.marks;
        return inStream;
    }
};

int main() {
    Student student;

    // Input student details using overloaded extraction operator
    cin >> student;

    // Output student details using overloaded insertion operator
    cout << "Student Details:" << endl << student;

    return 0;
}
