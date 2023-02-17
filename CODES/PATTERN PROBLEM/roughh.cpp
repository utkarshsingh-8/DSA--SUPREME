#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N :" << endl;
    cin >> n;

    /*char ch;
    cout << "Enter the value of ch :" << endl;
    cin >> ch;*/

    // SQUARE STAR PATTERN                                      😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // NUMBER SQUARE PATTERN                                    😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
            // cout << n-i+1 <<" ";// for printing in reverse order
        }
        cout << endl;
    }*/

    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j <<" ";
            //cout << n-j+1 <<" ";// for printing in reverse order
        }
        cout << endl;
    }*/

    /*for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }*/

    /*for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/

    // LADDER PATTERN IN NUMBER                                 😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }*/

    // LADDER PATTERN IN COUNTING NUMBER                        😏😏😬😬
    // int count = 1;
    /*for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= i; j++)
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
            // cout<<count<<" ";
            // count++;
        }
        cout << endl;
    }*/

    // LADDER PATTERN IN COUNTING REVERSE NUMBER                😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= i; j++)
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }*/

    // COUNTING PATTERN                                         😏😏😬😬
    /*int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }*/

    // STAR PATTERN                                             😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    /*for (int k = 1; k <= n; k++)
    {
        for (int m = k; m <= n; m++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // RECTANGULAR PATTERN                                      😏😏😬😬
    /*int row, col;
    cout << "Enter the value of row and col" << endl;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // CHARACTER SQUARE PATTERN                                 😏😏😬😬
    // ROW-WISE
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            // cout << n-i+1 <<" ";// for printing in reverse order
        }
        // ch++;
        cout << endl;

}*/

    // COLUMN-WISE
    /*for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            // char ch = 'A' + j - 1;
            cout << ch << " ";
            ch++;
            // cout << n-j+1 <<" ";// for printing in reverse order
        }
        cout << endl;
    }*/

    // ALPHABET-WISE
    /* char ch = 'A';
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n; j++)
         {
             // char ch = 'A' + j - 1;
             cout << ch << " ";
             ch++;
             // cout << n-j+1 <<" ";// for printing in reverse order
         }
         cout << endl;
     }*/

    // DECREASING TRIANGLE                                      😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // INCREASING COUNTING IN ROW AND COLUMN BOTH               😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i + j - 1<<" ";
        }
        cout << endl;
    }*/

    // INCREASING ALPHABET IN ROW AND COLUMN BOTH               😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/

    // INCREASING ALPHABET ROW WISE                             😏😏😬😬
    /*char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }*/

    // INCREASING ALPHABET                                     😏😏😬😬
    // char ch = 'A';
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch='A'+i-1;
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/

    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            ch++;
        }
        cout << endl;*/
    }
// SQUARE STAR PATTERN                                       😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // INCREASING PATTERN ROW-WISE (LEFT-SIDE)                   😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // INCREASING PATTERN COLUMN-WISE (LEFT-SIDE)                😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    // INCREASING PATTERN ROW-WISE (RIGHT-SIDE)                  😏😏😬😬
    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }*/


    /*for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j)
            {
                cout << " ";
            }
            else
            {
                cout << " * ";
            }
        }

        cout << endl;
    }*/
    
    return 0;
}