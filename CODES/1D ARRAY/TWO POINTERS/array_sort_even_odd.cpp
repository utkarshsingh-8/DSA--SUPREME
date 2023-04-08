// SORT EVEN INTEGERS AT THE BEGINNING OF THE ARRAY FOLLOWED BY THE ODD

#include <iostream>
#include <vector>
using namespace std;

void sort_the_array(vector<int> &v, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        if (v[start] % 2 == 1 && v[end] % 2 == 0)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
        if (v[start] % 2 == 0)
        {
            start++;
        }
        if (v[end] % 2 == 1)
        {
            end--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n;
    cout << endl;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Input the values in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort_the_array(v, n);

    return 0;
}