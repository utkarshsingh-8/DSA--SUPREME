#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int start = 0, end = size - 1;

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

    cout << "The Reverse Array of the given array is :" << endl;
    reverse_array(arr, size);
    print_array(arr, size);

    return 0;
}