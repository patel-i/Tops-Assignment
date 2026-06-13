#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    char str[100];

public:
    void getString()
    {
        cout << "Enter String: ";
        cin >> str;
    }

    // Operator Overloading
    String operator+(String s)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display()
    {
        cout << "Concatenated String: " << str << endl;
    }
};

int main()
{
    String s1, s2, s3;

    cout << "Enter First String:" << endl;
    s1.getString();

    cout << "Enter Second String:" << endl;
    s2.getString();

    s3 = s1 + s2;   // Operator Overloading

    s3.display();

}