// FIND THE UNION OF TWO ARRAYS

#include <iostream>
#include <vector>
using namespace std;

void union_of_array(int arr1[], int size1, int arr2[], int size2)
{
    vector<int> v;

    for (int i = 0; i < size1; i++)
    {
        v.push_back(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        bool duplicate = true;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                duplicate = false;
            }
        }
        if (duplicate == true)
        {
            v.push_back(arr2[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 8, 2, -5, 0, -11};
    int arr2[] = {9, -7, 8, 0, -11, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "The union of two arrays is:" << endl;
    union_of_array(arr1, size1, arr2, size2);

    return 0;
}