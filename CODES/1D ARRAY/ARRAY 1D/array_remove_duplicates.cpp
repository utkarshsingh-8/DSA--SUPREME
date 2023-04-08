// REMOVE THE DUPLICATES ELEMENTS FROM THE ARRAY

#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(int arr1[], int size1)
{
    vector<int> v;

    for (int i = 0; i < size1; i++)
    {
        for (int j = i + 1; j < size1; j++)
        {
            if (arr1[i] == arr1[j])
            {
                arr1[j] = -1;
            }
        }
    }
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != -1)
        {
            v.push_back(arr1[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, -1, 2, 2, 0, 3, 4, 4, 5, 9,-45, 7, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "The elements of the array are:" << endl;

    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "The array after removing the duplicates:" << endl;
    remove_duplicates(arr1, size1);
}