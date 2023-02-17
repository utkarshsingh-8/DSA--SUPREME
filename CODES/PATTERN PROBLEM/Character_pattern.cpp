#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N :" << endl;
    cin >> n;
    char ch;
    cout << "Enter the Character You want to print :" << endl;
    cin >> ch;
    cout << endl;

    // CHARACTER PRINT SAME IN ALL ROWS                         👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }*/

    // CHARACTER INCREASING ROW-WISE LEFT-SIDE                  👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }*/

    // CHARACTER DECREASING ROW-WISE LEFT-SIDE                  👨‍💻👨‍💻👨‍💻
    /*for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }*/

    // CHARACTER INCREASING ROW-WISE RIGHT-SIDE                 👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }*/

    // CHARACTER DECREASING ROW-WISE RIGHT-SIDE                 👨‍💻👨‍💻👨‍💻
    /*for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << ch << " ";
        }
        ch--;
        cout << endl;
    }*/

    // HILL PATTERN INCREASING ROW-WISE                         👨‍💻👨‍💻👨‍💻
    /* for (int i = 1; i <= n; i++)
     {
         for (int j = i; j <= n; j++)
         {
             cout << "  ";
         }
         for (int j = 1; j <= i; j++)
         {
             cout << ch << " ";
         }
         for (int j = 1; j < i; j++)
         {
             cout << ch << " ";
         }
         ch++;

         cout << endl;
     }*/

    // REVERSE HILL PATTERN INCREASING ROW-WISE                 👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << ch << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << ch << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        ch++;
        cout << endl;
    }*/

    // HILL PATTERN INCREASING COLUMN-WISE                      👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        char chh = 'A';
        for (int j = 1; j < i; j++)
        {
            cout << chh << " ";
            chh++;
        }
        cout << endl;
    }*/

    // INCREASING & DECREASING PATTERN LEFT-SIDE ROW WISE       👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //char ch = 'A';
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //char ch = 'A';
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }*/

    // INCREASING & DECREASING PATTERN LEFT-SIDE COLUMN WISE    👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = i; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/

    //  DECREASING & INCREASING PATTERN LEFT-SIDE COLUMN WISE   👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = i; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/

    // PATTERN DECREASING COLUMN WISE LEFT-SIDE                 👨‍💻👨‍💻👨‍💻
    /*for (int i = n; i >= 1; i--)
    {
        char ch='J';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout <<endl;
    }*/

    // PATTERN INCREASING COLUMN WISE LEFT-SIDE                 👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        char ch='J';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout <<endl;
    }*/

    // PATTERN INCREASING CHRACTER BY CHARACTER                 👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/

    // PATTERN DECREASING CHRACTER BY CHARACTER                 👨‍💻👨‍💻👨‍💻
    /*for (int i = n; i >= 1; i--)
    {
        for (int j = 1;j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }*/

    // PATTERN INCREASING ROW-WISE & DECREASING COLUMN-WISE     👨‍💻👨‍💻👨‍💻
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= i; j++)
        {
            char ch='F';
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }*/

    return 0;
}