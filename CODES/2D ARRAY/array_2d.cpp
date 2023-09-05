#include <iostream>
#include <vector>
using namespace std;

/*int rowSum(int arr[][3], int row, int col)
{
    int sumRow = 0;
    vector<int> v;

    for (int i = 0; i < row; i++)
    {
        sumRow = 0;
        for (int j = 0; j < col; j++)
        {
            sumRow = sumRow + arr[j][i];
        }
        cout << sumRow << endl;
        v.push_back(sumRow);
    }

    int rowSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        rowSum += v[i];
    }

    return rowSum;
}*/

/*bool linearSearch(int arr[][3], int row, int col, int key)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
            if (key == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}*/

/*void maxiElement(int arr[][3], int row, int col)
{
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << " Maximum Element is :" << max;
}*/

/*void transpose(int arr[][3], int row, int col)
{
    int tempArr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tempArr[i][j] = arr[j][i];
        }
    }

    cout << "The Transpose of the given array is" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << tempArr[i][j] << " ";
        }
        cout << endl;
    }
}*/

int main()
{
    /*int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = 3;
    int col = 3;
    int key = 8;*/

    // maxiElement(arr, row, col);

    // int sum = rowSum(arr, row, col);
    // cout << "Sum of the elements of the 2D Arrays: " << sum;

    /*bool search = linearSearch(arr, row, col, key);
    if (search)
    {
        cout << "Element  found";
    }
    else
    {
        cout << "\n Element not Found ";
    }*/

    // transpose(arr, row, col);

    vector<vector<int>> arr(3, vector<int>(3,1));

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    
   

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}