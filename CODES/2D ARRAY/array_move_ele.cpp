// MOVE ALL NEGATIVE ELEMENTS ON ONE SIDE OF THE ARRAY

#include <iostream>
using namespace std;

void moveElements(int arr[][3], int rows, int cols)
{
    int start = 0, end = -1;

    while (start <= end)
    {
        if (arr[start] >= 0 && arr[end] <= -1)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] <= -1)
        {
            start++;
        }
        else if (arr[end] >= 0)
        {
            end--;
        }
    }
}

int main()
{
    int arr[3][3] = {5, 0, -8, 33, -1, 17, -22, -6, 55};

    int rows = 3, cols = 3;
    cout << "The elements of the array before moving: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    moveElements(arr, rows, cols);

    return 0;
}