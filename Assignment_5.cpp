#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string course;

public:
    // Constructor
    Student(string name, int age, string course) {
        this->name = name;
        this->age = age;
        this->course = course;
    }

    // Display student details
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Creating object
    Student student1("Avanti Arjun Kanchan", 18 , "Artificial Intelligence - Data Science");

    // Display details
    student1.displayDetails();

    return 0;
}

