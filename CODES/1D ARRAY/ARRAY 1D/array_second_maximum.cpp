#include <iostream>
using namespace std;

// 1ST METHOD
/*int second_maximum_element(int arr[], int size)
{
    int max1 = INT32_MIN, max2 = INT32_MIN, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}*/

// 2ND METHOD  (MANIPULATION METHOD)
/*int second_maximum_element(int arr[], int size)
{
    int max1 = INT32_MIN, max2 = INT32_MIN, i;
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
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    return max2;
}*/

int main()
{

    int arr[] = {10, 88, 23, 74, -99, 12, 35, -4};
    int size = sizeof(arr) / sizeof(int);
    cout << endl;
    //cout << "The second maximum element in the Array is : " << second_maximum_element(arr, size);
    cout<<endl;

    return 0;
}