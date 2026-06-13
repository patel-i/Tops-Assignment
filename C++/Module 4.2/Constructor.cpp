#include <iostream>
using namespace std;

class Calculator
{
    float a, b;

public:
    // Constructor
    Calculator(float x, float y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible!" << endl;
    }
};

int main()
{
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator c(num1, num2); // Constructor called

    c.add();
    c.subtract();
    c.multiply();
    c.divide();

}