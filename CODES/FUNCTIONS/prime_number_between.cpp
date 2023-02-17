#include <iostream>
using namespace std;

void prime_interval(int a, int b)
{
    int i, j;
    /* for (i = a; i <= b; i++)
  {
      int count = 0;
      for (j = 1; j <= i; j++)
      {
          if (i % j == 0)
          {
              count++;
          }
      }
      if (count == 2)
      {
          cout << i << " ";
      }
  }*/

    for (i = a + 1; i < b; i++)
    {
        int flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The Prime Numbers between a and b are" << endl;
    prime_interval(a, b);

    return 0;
}