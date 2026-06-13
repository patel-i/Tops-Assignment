#include <iostream>
using namespace std;

class Array
{
private:
    int a[5];

public:
    void getData()
    {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    // Operator Overloading
    Array operator+(Array obj)
    {
        Array temp;

        for (int i = 0; i < 5; i++)
        {
            temp.a[i] = a[i] + obj.a[i];
        }

        return temp;
    }

    void display()
    {
        cout << "Resultant Array: ";
        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array A1, A2, A3;

    cout << "Enter elements of First Array:" << endl;
    A1.getData();

    cout << "Enter elements of Second Array:" << endl;
    A2.getData();

    A3 = A1 + A2;   // Operator Overloading

    A3.display();

}