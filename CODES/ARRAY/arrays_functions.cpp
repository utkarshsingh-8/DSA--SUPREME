#include <iostream>
using namespace std;

void voidArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << endl;

    printArray(arr, 5);
    voidArray(arr, 5);
    cout << endl;
    printArray(arr, 5);
    cout << endl;

    int siz = sizeof(arr) / sizeof(int);
    cout << "Size of Array is " << siz;
    cout << endl;

    return 0;
}