#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class Student
class Student : public Person
{
private:
    float percentage;

public:
    void readStudentData()
    {
        getPersonData();

        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudentData()
    {
        displayPersonData();
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

// Derived Class Teacher
class Teacher : public Person
{
private:
    float salary;

public:
    void readTeacherData()
    {
        getPersonData();

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacherData()
    {
        displayPersonData();
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "\nEnter Student Details" << endl;
    s.readStudentData();

    cout << "\nEnter Teacher Details" << endl;
    t.readTeacherData();

    cout << "\n--- Student Details ---" << endl;
    s.displayStudentData();

    cout << "\n--- Teacher Details ---" << endl;
    t.displayTeacherData();

}