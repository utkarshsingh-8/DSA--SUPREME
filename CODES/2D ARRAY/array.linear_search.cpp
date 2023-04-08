// LINEAR SEARCH AN ELEMENT IN THE ARRAY

#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int rows, int cols, int ele)
{
    bool present = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (ele == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
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
    
    int ele;
    cout << "Enter the element you want to search" << endl;
    cin >> ele;

    bool isPresent = linearSearch(arr, rows, cols, ele);

    if (isPresent == true)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Not Present";
    }
}