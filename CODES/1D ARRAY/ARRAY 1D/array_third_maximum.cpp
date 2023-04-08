#include <iostream>
using namespace std;

// 1ST METHOD
/*int third_maximum_element(int arr[], int size)
{
    int max1 = INT32_MIN, max2 = INT32_MIN, max3 = INT32_MIN, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3 && arr[i] != max2 && arr[i] != max1)
        {
            max3 = arr[i];
        }
    }
    return max3;
}*/

// 2ND METHOD  (MANIPULATION METHOD)
/*int third_maximum_element(int arr[], int size)
{
    int max1 = INT32_MIN, max2 = INT32_MIN, max3 = INT32_MIN, i;
    int index = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
            index = i;
        }
    }
    arr[index] = -1;
    int index1 = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
            index1 = i;
        }
    }

    arr[index1] = -1;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max3)
        {
            max3 = arr[i];
        }
    }

    return max3;
}*/

int main()
{

    int arr[] = {10, 88, 23, 74, -99, 12, 35, -4};
    int size = sizeof(arr) / sizeof(int);
    cout << endl;
    //cout << "The third maximum element in the Array is : " << third_maximum_element(arr, size);
    cout << endl;

    return 0;
}