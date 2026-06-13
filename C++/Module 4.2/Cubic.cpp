#include <iostream>
using namespace std;

class Calculate
{
public:
    inline int multiply(int a, int b)
    {
        return a * b;
    }

    inline int cube(int x)
    {
        return x * x * x;
    }
};

int main()
{
    Calculate c;
    int num1, num2, num;

    cout << "Enter two numbers for multiplication: ";
    cin >> num1 >> num2;

    cout << "Multiplication = " << c.multiply(num1, num2) << endl;

    cout << "Enter a number to find cube: ";
    cin >> num;

    cout << "Cube = " << c.cube(num) << endl;
}