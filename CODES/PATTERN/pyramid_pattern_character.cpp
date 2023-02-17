// PYRAMID PATTERN CHARACTER

#include <iostream>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();
void pattern15();
void pattern16();

int main()
{
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:\n";
    cout << endl;
    cout << "1. PRINT HALF PYRAMID CHARACTER ROW-WISE INCREASING" << endl;
    cout << endl;
    cout << "2. PRINT HALF PYRAMID CHARACTER ROW-WISE DECREASING" << endl;
    cout << endl;
    cout << "3. PRINT MIRROR HALF PYRAMID CHARACTER ROW-WISE INCR" << endl;
    cout << endl;
    cout << "4. PRINT MIRROR HALF PYRAMID CHARACTER ROW-WISE DECR" << endl;
    cout << endl;
    cout << "5. PRINT INVERTED HALF PYRAMID CHARACTER ROW-WISE INCR" << endl;
    cout << endl;
    cout << "6. PRINT INVERTED HALF PYRAMID CHARACTER ROW-WISE DECR" << endl;
    cout << endl;
    cout << "7. PRINT MIRROR INVER HALFPYRAMID CHARACTER ROW-WISE INCR" << endl;
    cout << endl;
    cout << "8. PRINT MIRROR INVER HALF PYRAMID CHARACTER ROW-WISE DEC" << endl;
    cout << endl;
    cout << "9. PRINT HALF PYRAMID CHARACTER COLUMN-WISE INCREASING" << endl;
    cout << endl;
    cout << "10.PRINT HALF PYRAMID CHARACTER COLUMN-WISE DECREASING" << endl;
    cout << endl;
    cout << "11.PRINT MIRROR HALF PYRAMID CHARACTER COLUMN-WISE INCR" << endl;
    cout << endl;
    cout << "12.PRINT MIRROR HALF PYRAMID CHARACTER COLUMN-WISE DECR" << endl;
    cout << endl;
    cout << "13.PRINT INVERTED HALF PYRAMID CHARACTER COLUMN-WISE INCR" << endl;
    cout << endl;
    cout << "14.PRINT INVERTED HALF PYRAMID CHARACTER COLUMN-WISE DECR" << endl;
    cout << endl;
    cout << "15.PRINT MIRROR INVER HALFPYRAMID CHARACTER COL-WISE INCR" << endl;
    cout << endl;
    cout << "16.PRINT MIRROR INVER HALFPYRAMID CHARACTER COL-WISE DECR" << endl;
    cout << endl;

    cin >> no_of_pattern;
    cout << endl;

    switch (no_of_pattern)
    {
    case 1:
        pattern1();
        break;

    case 2:
        pattern2();
        break;

    case 3:
        pattern3();
        break;

    case 4:
        pattern4();
        break;

    case 5:
        pattern5();
        break;

    case 6:
        pattern6();
        break;

    case 7:
        pattern7();
        break;

    case 8:
        pattern8();
        break;

    case 9:
        pattern9();
        break;

    case 10:
        pattern10();
        break;

    case 11:
        pattern11();
        break;

    case 12:
        pattern12();
        break;

    case 13:
        pattern13();
        break;

    case 14:
        pattern14();
        break;

    case 15:
        pattern15();
        break;

    case 16:
        pattern16();
        break;

    default:
        break;
    }
}

void pattern1()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A';
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern2()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A' + n - 1;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }
}

void pattern3()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER ROW-WISE INCREASHING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A';
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;

        cout << endl;
    }
}

void pattern4()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A' + n - 1;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch--;

        cout << endl;
    }
}

void pattern5()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern6()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A' + n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }
}

void pattern7()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern8()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    char ch = 'A' + n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }
}

////👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻

void pattern9()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern10()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void pattern11()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern12()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void pattern13()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern14()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void pattern15()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        char ch = 'A' + i - 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}

void pattern16()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        char ch = 'A' + n - i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
}
