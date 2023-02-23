// FIND DUPLICATE ELEMENT IN THE ARRAY

#include <iostream>
using namespace std;

void duplicate_element(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            cout << arr[i] << " ";
        }
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

    int arr[] = {1, 2, 5, 2, 7, 1, 6, 6, 8, 0, 9, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    print_array(arr, size);
    cout << endl;

    cout << "The duplicate elements in the Array is :" << endl;
    duplicate_element(arr, size);

    return 0;
}