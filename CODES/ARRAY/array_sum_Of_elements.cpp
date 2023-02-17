// SUM OF ELEMENTS OF AN ARRAY

#include <iostream>
using namespace std;

int sum_of_element(int arr[], int size)
{

    int sum = 0, i;
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    cout << "The Sum of the elements of the Array is :" << sum_of_element(arr, size);

    return 0;
}