#include <iostream>
using namespace std;

void minimum_element(int arr[], int size)
{
    int min = INT32_MAX;
    int index = 0;
    // int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index=i;
        }
    }
    cout << "The minimum element in Array is :" << min << endl;
    cout << "The minimum element present at index :" << index;
}

int main()
{

    int arr[] = {5, 88, 23, 74, -99, 12, 35, 4};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    minimum_element(arr, size);

    return 0;
}