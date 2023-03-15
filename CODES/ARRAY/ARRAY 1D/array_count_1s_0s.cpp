#include <iostream>
using namespace std;

void count_element(int arr[], int size)
{
    int zero_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
    }

    int one_count = size - zero_count;
    cout << zero_count << " and " << one_count;
}

int main()
{

    int arr[] = {0, 1, 0, 0, 1, 1, 0, 0, 0};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    cout << "The count of 0`s and 1`s in Array is :";
    count_element(arr, size);

    return 0;
}