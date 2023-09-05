#include <iostream>
#include <vector>
using namespace std;

/*void extremePrint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (true)
    {
        if(start > end)
        {
            break;
        }

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}*/

/*int uniqueEle(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}*/

/*void intersection(int arr1[], int arr2[], int size1, int size2)
{
    vector<int> v;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT8_MIN;
                v.push_back(arr1[i]);
            }
        }
    }

    cout << "Intersection of two arrays are: ";
    for (auto x : v)
    {
        cout << x << " ";
    }
}*/

/*bool pair_Sum(int arr1[], int size1, int k)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = i + 1; j < size1; j++)
        {
            if ((arr1[i] + arr1[j]) == k)
            {
                return true;
            }
        }
    }
    return false;
}*/

/*void sort_zeroes_ones(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 1)
        {
            end--;
        }
        if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}*/

int main()
{
    // int arr[] = {10, 10, 20, 20, 30, 30, 40, 40, 50, 60, 60};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // extremePrint(arr, size);

    // int unique = uniqueEle(arr, size);
    // cout << "Unique Element in the array is " << unique;

    // int arr1[] = {1, 2, 5, 3, 8, 1, 4, 6};
    //  int arr2[] = {3, 3, 3, 6, 7, 1, 1};
    // int n1 = sizeof(arr1) / sizeof(arr1[0]);
    //  int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // intersection(arr1, arr2, n1, n2);

    /*int k = 9;
    bool present = pair_Sum(arr1, n1, k);
    if (present)
    {
        cout << "Pair is present";
    }
    else
    {
        cout << "Pair is not present";
    }*/

    int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_zeroes_ones(arr, size);

    return 0;
}