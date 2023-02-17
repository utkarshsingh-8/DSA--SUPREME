// RECTANGULAR AND SQUARE PATTERNS

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


int main()
{
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:\n";
    cout << endl;
    cout << "1. PRINT STAR IN ROW AND COLUMN" << endl;
    cout << endl;
    cout << "2. PRINT NUMBER IN ROW-WISE INCREASING" << endl;
    cout << endl;
    cout << "3. PRINT NUMBER IN COLUMN-WISE INCREASING" << endl;
    cout << endl;
    cout << "4. PRINT NUMBER ROW-WISE DESCENDING-ORDER" << endl;
    cout << endl;
    cout << "5. PRINT NUMBER COLUMN-WISE DESCENDING-ORDER" << endl;
    cout << endl;
    cout << "6. PRINT CHARACTER ROW-WISE" << endl;
    cout << endl;
    cout << "7. PRINT CHARACTER COLUMN-WISE" << endl;
    cout << endl;
    cout << "8. PRINT CHARACTER ROW-WISE DESCENDING-ORDER" << endl;
    cout << endl;
    cout << "9. PRINT CHARACTER COLUMN-WISE DESCENDING-MANNER" << endl;
    cout << endl;

    cout << "10.PRINT SOLID SQUARE" << endl;
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

 
    default:
        break;
    }
}

void pattern1()
{
    cout << endl;
    cout << "You are going to see a rectangular pattern:- " << endl;

    int i,j,row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2()
{
    cout << endl;
    cout << "You are going to see a NUMBER IN ROW-WISE INCREASING:- " << endl;

    int i,j,row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;

    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= col; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern3()
{
    cout << endl;
    cout << "You are going to see a NUMBER IN COLUMN-WISE:- " << endl;
    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4()
{

    cout << endl;
    cout << "You are going to see a NUMBER IN ROW-WISE DESCENDING-ORDER:- " << endl;

    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5()
{
    cout << endl;
    cout << "You are going to see a NUMBER IN COLUMN-WISE DESCENDING-ORDER:- " << endl;

    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = col; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern6()
{
    cout << endl;
    cout << "You are going to see CHARACTER ROW-WISE:- " << endl;

    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern7()
{
    cout << endl;
    cout << "You are going to see CHARACTER COLUMN-WISE:- " << endl;

    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= col; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern8()
{
    cout << endl;
    cout << "You are going to see CHARACTER ROW-WISE DESCENDING-ORDER:- " << endl;
    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    char ch = 'A' + row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }
}

void pattern9()
{
    cout << endl;
    cout << "You are going to see CHARACTER COLUMN-WISE DESCENDING-ORDER:- " << endl;

    int row, col;
    cout << "Enter the value of row & column" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        char ch = 'A' + col - 1;
        for (int j = 1; j <= col; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void pattern10()
{
    cout << endl;
    cout << "You are going to see a solid square pattern:- " << endl;

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

