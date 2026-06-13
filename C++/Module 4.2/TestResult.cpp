#include <iostream>
using namespace std;

// Base Class
class Student
{
protected:
    int rollNo;

public:
    void getRollNo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayRollNo()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived Class
class Test : public Student
{
protected:
    int marks1, marks2;

public:
    void getMarks()
    {
        cout << "Enter Marks in Subject 1: ";
        cin >> marks1;

        cout << "Enter Marks in Subject 2: ";
        cin >> marks2;
    }

    void displayMarks()
    {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

// Derived from Test (Multilevel Inheritance)
class Result : public Test
{
private:
    int total;

public:
    void calculateResult()
    {
        total = marks1 + marks2;
    }

    void displayResult()
    {
        displayRollNo();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getRollNo();
    r.getMarks();
    r.calculateResult();

    cout << "\n----- Result -----" << endl;
    r.displayResult();

}