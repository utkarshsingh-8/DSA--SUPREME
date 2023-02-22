#include <iostream>
using namespace std;

void second_maximum_element(int arr[], int size)
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

    cout << "The second minimum element in the Array is :" << max2;
}

int main()
{

    int arr[] = {10, 88, 23, 74, -99, 12, 35, -4};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    second_maximum_element(arr, size);

    return 0;
}