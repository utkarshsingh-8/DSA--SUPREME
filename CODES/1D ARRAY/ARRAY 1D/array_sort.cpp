// SORT THE GIVEN ARRAY

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
}

void sort_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    print_array(v, size);
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << endl;
    cout << "The array before sorting is :" << endl;
    print_array(v, n);

    cout << endl;
    cout << "The array after sorting is" << endl;
    sort_array(v, n);
}