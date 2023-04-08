// MOVE ALL NEGATIVE ELEMENTS ON ONE SIDE OF THE ARRAY

#include <bits/stdc++.h>
using namespace std;

// PRINT ARRAY OF ELEMENTS
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
}

// 1ST METHOD
/*void moveElements(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        if (arr[start] >=0 && arr[end] <= -1)
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
    cout << endl;
    cout << "The elements of the array after sorting -ve & +ve" << endl;
    print(arr);
}*/

// 2ND METHOD
/*void moveElements(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    cout << endl;
    cout << "The elements of the array after sorting -ve & +ve" << endl;
    print(arr);
}*/

int main()
{
    int n;
    cout << "Enter the  size of the array:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The elements of the array before sorting -ve & +ve" << endl;
    print(arr);

    moveElements(arr, n);

    return 0;
}