#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int start = 0, end = size - 1, i;

    /* for (i = 0; i < size; i++)
     {

         start = end;
         cout << arr[start] << " ";
         end--;
     }*/

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {5, 23, 74, 99, 12, 35, -8};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    print_array(arr, size);
    cout << endl;
    cout << "The Reverse Array of the given array is below:" << endl;
    reverse_array(arr, size);
    print_array(arr, size);

    return 0;
}