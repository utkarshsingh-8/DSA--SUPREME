#include <iostream>
using namespace std;

void maximum_element(int arr[], int size)
{
    int max = INT32_MIN;
    // int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum element in Array is :" << max;
}

int main()
{

    int arr[] = {1, 5, 88, 23, 74, 99, 12, 35, 4};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    maximum_element(arr, size);

    return 0;
}