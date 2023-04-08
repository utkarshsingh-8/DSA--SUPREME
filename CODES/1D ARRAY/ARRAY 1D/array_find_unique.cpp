// FIND UNIQUE ELEMENTS IN AN ARRAY

#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// 1st Method  == best for +ve & -ve values
/*void unique_element(int arr[], int size)
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
        if (count <= 1)
        {
            cout << arr[i] << " ";
        }
    }
}*/

// 2nd Method == for +ve values only (MANIPULATION METHOD)
/*void unique_element(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > -1)
        {
            cout << arr[i] << " ";
        }
    }
}*/

int main()
{

    int arr[] = {1, 2, 8, 5, 3, -4, 5, 8, 9, -4, -2, 2, -1};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    print_array(arr, size);
    cout << endl;

    cout << "The unique elements in the Array is :" << endl;
    //unique_element(arr, size);

    return 0;
}