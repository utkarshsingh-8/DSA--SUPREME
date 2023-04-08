// SELECTION SORTING TECHNIQUE (iN this sorting technique the smallest element is positioned at the beginning of the array in each round in unsorted region of the array)

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        int minIndex = i;

        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {4, 8, 1, 12, 0, 7, 6, -8, 9};
    selectionSort(v);
    return 0;
}