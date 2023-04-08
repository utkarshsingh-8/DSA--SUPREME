#include <iostream>
using namespace std;

void sort_array(int arr[], int size)
{
    int start = 0, end = size - 1;
    
    while (start <= end)
    {
        if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {0, 1, 0, 0, 1, 1, 0, 0, 0};
    int size = sizeof(arr) / sizeof(int);

    cout << endl;
    sort_array(arr, size);

    return 0;
}