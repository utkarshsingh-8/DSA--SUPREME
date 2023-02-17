// PYRAMID PATTERN HOLLOW STAR & NUMBER

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
void pattern17();
void pattern18();
void pattern19();
void pattern20();

int main()
{
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:\n";
    cout << endl;
    cout << "1. PRINT HALF PYRAMID" << endl;
    cout << endl;
    cout << "2. PRINT INVERTED HALF PYRAMID" << endl;
    cout << endl;
    cout << "3. PRINT MIRROR HALF PYRAMID" << endl;
    cout << endl;
    cout << "4. PRINT MIRROR INVERTED HALF PYRAMID" << endl;
    cout << endl;
    cout << "5. PRINT HALF PYRAMID NUMBER ROW-WISE INCREASING" << endl;
    cout << endl;
    cout << "6. PRINT HALF PYRAMID NUMBER ROW-WISE DECREASING" << endl;
    cout << endl;
    cout << "7. PRINT MIRROR HALF PYRAMID NUMBER ROW-WISE INCREASING" << endl;
    cout << endl;
    cout << "8. PRINT MIRROR HALF PYRAMID NUMBER ROW-WISE DECREASING" << endl;
    cout << endl;
    cout << "9. PRINT INVERTED HALF PYRAMID NUMBER ROW-WISE INCREASING" << endl;
    cout << endl;
    cout << "10.PRINT INVERTED HALF PYRAMID NUMBER ROW-WISE DECREASING" << endl;
    cout << endl;
    cout << "11.PRINT MIRROR INVERTED HALFPYRAMID NUMBER ROW-WISE INCR" << endl;
    cout << endl;
    cout << "12.PRINT MIRROR INVERTED HALF PYRAMID NUMBER ROW-WISE DEC" << endl;
    cout << endl;
    cout << "13.PRINT HALF PYRAMID NUMBER COLUMN-WISE INCREASING" << endl;
    cout << endl;
    cout << "14.PRINT HALF PYRAMID NUMBER COLUMN-WISE DECREASING" << endl;
    cout << endl;
    cout << "15.PRINT MIRROR HALF PYRAMID NUMBER COLUMN-WISE INCR" << endl;
    cout << endl;
    cout << "16.PRINT MIRROR HALF PYRAMID NUMBER COLUMN-WISE DECR" << endl;
    cout << endl;
    cout << "17.PRINT INVERTED HALF PYRAMID NUMBER COLUMN-WISE INCR" << endl;
    cout << endl;
    cout << "18.PRINT INVERTED HALF PYRAMID NUMBER COLUMN-WISE DECR" << endl;
    cout << endl;
    cout << "19.PRINT MIRROR INVERTED HALFPYRAMID NUMBER COL-WISE INCR" << endl;
    cout << endl;
    cout << "20.PRINT MIRROR INVERTED HALFPYRAMID NUMBER COL-WISE DECR" << endl;
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

    case 17:
        pattern17();
        break;

    case 18:
        pattern18();
        break;

    case 19:
        pattern19();
        break;

    case 20:
        pattern20();
        break;

    default:
        break;
    }
}

void pattern1()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern6()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = n ;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
        }
        num--;
        cout << endl;
    }
}

void pattern7()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER ROW-WISE INCREASHING:- " << endl;

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
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern8()
{
    cout << endl;
    cout << "You are going to see a MIRROR HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = 1 + n - 1;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
        }
        num--;

        cout << endl;
    }
}

void pattern9()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern10()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
        }
        num--;
        cout << endl;
    }
}

void pattern11()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER ROW-WISE INCREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern12()
{
    cout << endl;
    cout << "You are going to see a MIRROR INVERTED HALF PYRAMID NUMBER ROW-WISE DECREASING:- " << endl;

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
        }
        num--;
        cout << endl;
    }
}

////👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻👨‍💻

void pattern13()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern14()
{
    cout << endl;
    cout << "You are going to see a HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int num = n;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern15()
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
        int num = 1 + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern16()
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
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern17()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER COLUMN-WISE INCREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern18()
{
    cout << endl;
    cout << "You are going to see a INVERTED HALF PYRAMID NUMBER COLUMN-WISE DECREASING:- " << endl;
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int num = n;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern19()
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
        int num = i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
}

void pattern20()
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
        int num = 1 + n - i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << num << " ";
            num--;
        }

        cout << endl;
    }
}
