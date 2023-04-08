// PRINT THE COUNT OF ODD AND EVEN INTEGERS PRESENT IN AN ARRAY

#include <iostream>
using namespace std;

void count_odd_even(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "The count of even elements present in the array is: " << count;
    cout << endl;
    cout << "The count of odd elements present in the array is: " << size - count;
}

int main()
{
    int arr[] = {1, 5, 88, 23, 74, 99, 12, 35, 2, 0, 0};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    count_odd_even(arr, size);
    cout << endl;

    return 0;
}