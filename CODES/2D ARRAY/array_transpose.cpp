// FIND THE TRANSPOSE OF A MATRIX

#include <iostream>
using namespace std;

// PRINT ARRAY
void print(int a[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

/*void transpose_matrix(int a[3][3], int rows, int cols)
{
    int temp[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[i][j] = a[j][i];
        }
        cout << endl;
    }
    cout << "The Matrix after Transpose" << endl;
    print(temp, rows, cols);
}*/

/*void transpose_matrix(int a[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1 ; j < cols; j++)
        {
            int temp = a[i][j];
            a[i][j]=a[j][i]; //swapping the elements of two arrays
            a[j][i]= temp;
        }
        cout << endl;
    }
    cout << "The Matrix after Transpose" << endl;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
   
}*/


int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "The Matrix before Transpose" << endl;
    print(a, rows, cols);
    transpose_matrix(a, rows, cols);

    return 0;
}