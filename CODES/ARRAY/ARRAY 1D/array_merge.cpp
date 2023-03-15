// MERGE THE TWO ARRAYS

#include <bits/stdc++.h>
using namespace std;

void merge_the_array(int arr1[], int size1, int arr2[], int size2)
{
    int i;
    vector<int> v;

    for (i = 0; i < size1; i++)
    {
        v.push_back(arr1[i]);
    }
    for (i = 0; i < size2; i++)
    {
        v.push_back(arr2[i]);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 8, 2, -5, 0, -11};
    int arr2[] = {9, -7, 8, 0, -1, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1, arr1 + (size1 - 1));
    sort(arr2, arr1 + (size2 - 1));

    cout << "The resultant array after merge the two arrays:" << endl;
    merge_the_array(arr1, size1, arr2, size2);

    return 0;
}