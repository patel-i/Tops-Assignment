#include <iostream>
#include <string>
using namespace std;

// Base Class
class Cricketer
{
protected:
    string name;

public:
    void getCricketerData()
    {
        cout << "Enter Cricketer Name: ";
        cin.ignore();
        getline(cin, name);
    }
};

// Derived Class
class Batsman : public Cricketer
{
private:
    int totalRuns;
    int innings;
    float averageRuns;
    int bestPerformance;

public:
    void inputData()
    {
        getCricketerData();

        cout << "Enter Total Runs: ";
        cin >> totalRuns;

        cout << "Enter Number of Innings: ";
        cin >> innings;

        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
    }

    void calculateAverage()
    {
        averageRuns = (float)totalRuns / innings;
    }

    void displayData()
    {
        cout << "\n----- Batsman Details -----" << endl;
        cout << "Name            : " << name << endl;
        cout << "Total Runs      : " << totalRuns << endl;
        cout << "Average Runs    : " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
{
    Batsman b;

    b.inputData();
    b.calculateAverage();
    b.displayData();

}