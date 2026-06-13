#include <iostream>
using namespace std;

class MathOperation
{
public:
    // Addition
    int calculate(int a, int b)
    {
        return a + b;
    }

    // Subtraction
    int calculate(int a, int b, int type)
    {
        return a - b;
    }

    // Multiplication
    float calculate(float a, float b)
    {
        return a * b;
    }

    // Division
    float calculate(float a, float b, float type)
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
    MathOperation m;

    cout << "Addition = " << m.calculate(20, 10) << endl;

    cout << "Subtraction = " << m.calculate(20, 10, 1) << endl;

    cout << "Multiplication = " << m.calculate(20.0f, 10.0f) << endl;

    cout << "Division = " << m.calculate(20.0f, 10.0f, 1.0f) << endl;

}