// COLUMN SUM PRINT

#include <iostream>
using namespace std;

void col_sum_print(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of column " << i + 1 << " is " << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3, cols = 3;

    cout << "Input the value in the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    col_sum_print(arr, rows, cols);
}