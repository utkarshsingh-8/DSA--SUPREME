// FIND INTERSECTION OF TWO ARRAYS

#include <iostream>
#include <vector>
using namespace std;

void intersection_of_array(int arr1[], int size1, int arr2[], int size2)
{
    vector<int> v;

    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                v.push_back(arr2[i]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 8, 2, 2 - 5, 0, -11};
    int arr2[] = {9, -7, 8, 0, 2, -11, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "The Intersection of two arrays is:" << endl;
    intersection_of_array(arr1, size1, arr2, size2);

    return 0;
}