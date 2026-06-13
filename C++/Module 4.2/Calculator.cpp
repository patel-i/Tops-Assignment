#include <iostream>
using namespace std;

class Calculator
{
public:
    float add(float a, float b)
    {
        return a + b;
    }

    float subtract(float a, float b)
    {
        return a - b;
    }

    float multiply(float a, float b)
    {
        return a * b;
    }

    float divide(float a, float b)
    {
        if (b != 0)
            return a / b;
        else
        {
            cout << "Division by zero is not possible!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator calc;
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result = " << calc.add(num1, num2);
            break;

        case 2:
            cout << "Result = " << calc.subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << calc.multiply(num1, num2);
            break;

        case 4:
            cout << "Result = " << calc.divide(num1, num2);
            break;

        default:
            cout << "Invalid Choice!";
    }
}