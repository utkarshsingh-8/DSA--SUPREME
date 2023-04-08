// FIND SUM OF UNIQUE ELEMENT IN AN ARRAY

#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void unique_element(int arr[], int size)
{
    int sum = 0;
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
            sum += arr[i];
        }
    }
    cout<<endl;
    cout << "The Sum of the unique elements is: " << sum;
}

int main()
{

    int arr[] = {1, 2, 8, 5, 3, -4, 5, 8, 9, -4, -2, 2, -1};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    print_array(arr, size);
    cout << endl;

    cout << "The unique elements in the Array is :" << endl;
    unique_element(arr, size);

    return 0;
}