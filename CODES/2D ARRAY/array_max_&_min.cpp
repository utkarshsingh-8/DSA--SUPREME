// FIND MAXIMUM AND MINIMUM ELEMENT IN THE ARRAY

#include <iostream>
using namespace std;

void get_max_and_min(int arr[3][3], int rows, int cols)
{
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Maximum element in the array is " << max << endl;
   cout << "Minimum element in the array is " << min << endl;
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

    get_max_and_min(arr, rows, cols);
}