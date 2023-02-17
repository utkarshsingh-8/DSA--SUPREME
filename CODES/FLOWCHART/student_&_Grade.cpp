#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks of the student :" << endl;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grades A";
    }
    else if (marks >= 80)
    {
        cout << "Grades B";
    }
    else if (marks >= 60)
    {
        cout << "Grades C";
    }
    else if (marks >= 40)
    {
        cout << "Grades D";
    }
    else
    {
        cout << "Grades E";
    }
    return 0;
}