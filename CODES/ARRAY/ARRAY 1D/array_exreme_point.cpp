#include <iostream>
using namespace std;

void extreme_point_print(int arr[], int size)
{
    int start = 0, end = size - 1, i;
    for (i = 0; i < size; i++)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
        }

        else if (start < end)
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}

int main()
{

    int arr[] = {5, 88, 23, 74, 99, 12, 35};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    extreme_point_print(arr, size);

    return 0;
}