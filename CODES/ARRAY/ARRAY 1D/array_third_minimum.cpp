#include <iostream>
using namespace std;

void third_minimum_element(int arr[], int size)
{
    int min1 = INT32_MAX, min2 = INT32_MAX,min3 = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min1)
        {
            min3=min2;
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 )
        {
            min3=min2;
            min2 = arr[i];
        }
        else if (arr[i] < min3 )
        {
            min3 = arr[i];
        }
    }
    cout << "The third minimum element in the Array is :" << min3;
}

int main()
{

    int arr[] = {105, 88, 23, 74, -99, 12, 35, -4};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    third_minimum_element(arr, size);

    return 0;
}