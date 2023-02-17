#include <iostream>
using namespace std;

void grade(int marks)
{
    if (marks >= 90)
    {
        cout << "A Grade";
    }
    else if (marks >= 80)
    {
        cout << "B Grade";
    }
    else if (marks >= 60)
    {
        cout << "C Grade";
    }
    else if (marks >= 40)
    {
        cout << "D Grade";
    }
    else
    {
        cout << "E Grade";
    }
}

int main()
{
    int marks;
    cout << "Enter the marks of the student" << endl;
    cin >> marks;

    grade(marks);
    return 0;
}