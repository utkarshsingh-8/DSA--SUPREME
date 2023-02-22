#include <iostream>
using namespace std;

void second_minimum_element(int arr[], int size)
{
    int min1 = INT32_MAX, min2 = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }
    cout << "The second minimum element in the Array is :" << min2;
}

int main()
{

    int arr[] = {105, 88, 23, 74, -99, 12, 35, -4};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    second_minimum_element(arr, size);

    return 0;
}