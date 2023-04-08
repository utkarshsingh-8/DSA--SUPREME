// ARRAY SORT 0`s , 1`s and 2`s

#include <iostream>
#include <vector>
using namespace std;

void sort_array(int arr[][3],int rows,int cols)
{

}

int main()
{
    int arr[3][3] = {{1, 1, 0}, {2, 0, 1}, {0, 0, 2}};
    int rows = 3, cols = 3;
    cout << "The elements of the array before sorting: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    sort_array(arr, rows, cols);
    
    return 0;
}