// SWAP ALTERNATE ELEMENT

#include <iostream>
using namespace std;

void swap_alternate_element(int arr[], int size)
{
    int start = 0, i;

    for (i = 0; i < size / 2; i++)
    {
        swap(arr[start], arr[start + 1]);
        start = start + 2;
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

    int arr[] = {5, 23, 74, 99, 12, 25, -8, 30};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    print_array(arr, size);
    cout << endl;

    cout << "The Array after the swap of the alternate element:" << endl;
    swap_alternate_element(arr, size);
    print_array(arr, size);

    return 0;
}