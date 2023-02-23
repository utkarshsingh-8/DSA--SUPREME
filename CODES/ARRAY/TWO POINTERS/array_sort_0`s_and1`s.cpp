// SORT AN ARRAY CONSISTING OF ONLY O`s AND 1`s

#include <iostream>
#include <vector>
using namespace std;

void sort_zeroes_and_ones(vector<int> &v, int size)
{
    int count_zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == 0)
        {
            count_zero++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i < count_zero)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }

    cout << endl;
    cout << "The array after sorting 0`s and 1`s is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the zeroes and ones in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort_zeroes_and_ones(v, n);

    return 0;
}