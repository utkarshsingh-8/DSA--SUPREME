// FULL PYRAMID PATTERN AND OTHER PATTERN

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


int main()
{
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:\n";
    cout << endl;
    cout << "1. PRINT FULL PYRAMID STAR PATTERN" << endl;
    cout << endl;
    cout << "2. PRINT INVERTED FULL PYRAMID STAR PATTERN" << endl;
    cout << endl;
    cout << "3. PRINT DIAMOND STAR PATTERN" << endl;
    cout << endl;
    cout << "4. PRINT 180` HALF PYRAMID STAR PATTERN" << endl;
    cout << endl;
    cout << "5. PRINT INVERTED 180` HALF PYRAMID STAR PATTERN" << endl;
    cout << endl;
    cout << "6. PRINT FLOYD`S TRIANGLE NUMBER PATTERN" << endl;
    cout << endl;
    cout << "7. PRINT FULL PYRAMID NUMBER PATTERN" << endl;
    cout << endl;
    cout << "8. PRINT INVERTED FULL PYRAMID NUMBER PATTERN" << endl;
    cout << endl;
    cout << "9. PRINT DIAMOND NUMBER PATTERN" << endl;
    cout << endl;
    cout << "10.PRINT PASCAL TRIANGLE" << endl;
    cout << endl;
    cout << "11.PRINT COMBINE TWO HALF PYRAMID " << endl;
    cout << endl;
    cout << "12.PRINT BUTTERFLY STAR PATTERN " << endl;
    cout << endl;
    cout << "13.PRINT INVERTED FULL PYRAMID OF ALPHABETS" << endl;
    cout << endl;
    cout << "14.PRINT DIAMOND ALPHABET PATTERN" << endl;
    cout << endl;
    cout << "15.PRINT FLIPPED SOLID DIAMOND" << endl;
    cout << endl;
    cout << "16.PRINT NUMERIC FULL PYRAMID" << endl;
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

    default:
        break;
    }
}

void pattern1()
{
    cout << endl;
    cout << "You are going to see a PRINT FULL PYRAMID STAR PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2()
{
    cout << endl;
    cout << "You are going to see a INVERTED PRINT FULL PYRAMID STAR PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * (n - i + 1) - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void pattern3()
{
    cout << endl;
    cout << "You are going to see a DIAMOND STAR PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4()
{
    cout << endl;
    cout << "You are going to see a 180` HALF PYRAMID STAR PATTERN:- " << endl;

    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5()
{
    cout << endl;
    cout << "You are going to see a INVERTED 180` HALF PYRAMID STAR PATTERN:- " << endl;

    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6()
{
    cout << endl;
    cout << "You are going to see a FLOYD`S TRIANGLE NUMBER PATTERN:- " << endl;

    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern7()
{
    cout << endl;
    cout << "You are going to see a PRINT FULL PYRAMID NUMBER PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
}

void pattern8()
{
    cout << endl;
    cout << "You are going to see a INVERTED PRINT FULL PYRAMID STAR PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * (n - i + 1) - 1; j++)
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
    cout << "You are going to see a PRINT FULL PYRAMID NUMBER PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int num = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    int numm = n;
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << numm << " ";
        }
        numm--;
        cout << endl;
    }
}

void pattern10()
{
    cout << endl;
    cout << "You are going to see a PASCAL TRIANGLE:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        int num = 1;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        num = i - 1;
        for (j = 1; j < i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern11()
{
    cout << endl;
    cout << "You are going to see a PRINT COMBINE TWO HALF PYRAMID:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        int num = 1;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }

        num = i;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern12()
{
    cout << endl;
    cout << "You are going to see a PRINT BUTTERFLY PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (j = 1; j < 2 * i - 1; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern13()
{
    cout << endl;
    cout << "You are going to see a INVERTED FULL PYRAMID ALPHABET:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (j = 1; j <= 2 * (n - i + 1) - 1; j++)
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
    cout << "You are going to see a DIAMOND STAR PATTERN:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern15()
{
    cout << endl;
    cout << "You are going to see a FLIPPED SOLID DIAMOND:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (j = 1; j < 2 * i - 1; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (j = 1; j < 2 * (n - i) + 1; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
/// @brief need modification
void pattern16()
{
    cout << endl;
    cout << "You are going to see a NUMERIC FULL PYRAMID:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        int num = i;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        
        num =2*i;
        for (j = 1; j < i; j++)
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
    cout << "You are going to see a NUMERIC FULL PYRAMID:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        int num = i;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        
        num =2*i;
        for (j = 1; j < i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

void pattern18()
{
    cout << endl;
    cout << "You are going to see a NUMERIC FULL PYRAMID:- " << endl;
    int i, j, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        int num = i;
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        
        num =2*i;
        for (j = 1; j < i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}
