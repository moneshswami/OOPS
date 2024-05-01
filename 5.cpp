#include <iostream>
#include <cstring>
using namespace std;

class Stud {
private:
    char* name;
    int age;
    double gpa;
public:
    // Default constructor
    Stud() : name(nullptr), age(0), gpa(0.0) {
        cout << "Default Constructor called" << endl;
    }
    // Overloaded constructor
    Stud(const char* n, int a, double g) : age(a), gpa(g) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Overloaded Constructor called" << endl;
    }
    // Copy constructor
    Stud(const Stud& other) : age(other.age), gpa(other.gpa) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        cout << "Copy Constructor called" << endl;
    }
    // Destructor
    ~Stud() {
        delete[] name;
        cout << "Destructor called" << endl;
    }
    // Input student information from the user
    void inputInfo() {
        char buffer[100];
        cout << "Enter name: ";
        cin.getline(buffer, 100);
        name = new char[strlen(buffer) + 1];
        strcpy(name, buffer);
        cout << "Enter age: ";
        cin >> age;

        cout << "Enter GPA: ";
        cin >> gpa;
        cin.ignore(); // Clear the newline character from the buffer
    }
    // Display student information
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }
};

int main() {
    // Using default constructor
    Stud defaultStud;
    // Using overloaded constructor
    Stud stud1("John", 20, 3.5);
    stud1.displayInfo();
    // Using copy constructor
    Stud stud2 = stud1;
    stud2.displayInfo();
    // Using multiple constructors
    Stud stud3; // Default constructor
    stud3.inputInfo(); // Take input from user
    stud3.displayInfo();
    return 0;
}
