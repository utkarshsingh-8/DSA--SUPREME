// FIND THE LARGEST ROW SUM IN AN ARRAY

#include <iostream>
using namespace std;

void row_sum_LARGEST(int arr[][3], int rows, int cols)
{
    int maxSumRow = 0, maxSum = -1;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxSumRow = i;
        }
    }
    cout << "Row is: " << maxSumRow + 1 << " with largest sum: " << maxSum;
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

    row_sum_LARGEST(arr, rows, cols);
}