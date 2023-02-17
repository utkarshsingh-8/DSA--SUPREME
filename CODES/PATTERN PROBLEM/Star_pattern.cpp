#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N :" << endl;
    cin >> n;
    cout << endl;

    // SQUARE PATTERN                       👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // LEFT TRIANGLE INCREASING             👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // LEFT TRIANGLE DECREASING             👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // RIGHT TRIANGLE INCREASING            👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // RIGHT TRIANGLE DECREASING            👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // HILL PATTERN                         👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"* ";
        }
        cout << endl;

    }*/

    // REVERSE HILL PATTERN                 👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j < n; j++)
        {
            cout<<"* ";
        }
        cout << endl;

    }*/

    // DIAMOND PATTERN                      👈👈👈
    /*for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j < n; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }*/

    // LEFT PASCAL TRIANGLE                 👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // RIGHT PASCAL TRIANGLE                👈👈👈
    /*for (int i = 1; i <= n-1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // DIAMOND PATTERN                      👈👈👈
    /*for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // SANDGLASS PATTERN                    👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    // BUTTERFLY PATTERN                    👈👈👈
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = n * 2 - i * 2;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = n * 2 - i * 2;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    return 0;
}