#include <iostream>
#include <vector>
using namespace std;

/*void countEven_Odd(int arr[], int size)
{
    int even_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
    }
    cout << "The Count of even elements are " << even_count;
    cout << endl;
    cout << "The Count of odd elements are " << size - even_count;
}*/

/*void sum(int arr[], int size)
{
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    cout << "The sum of maximum and minimum element of the array " << maxi + mini;
}*/

/*void reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}*/

/*void find_range_ele(int arr[], int size)
{
    int range_sum = 0, arr_sum = 0;
    for (int i = 0; i < size; i++)
    {
        arr_sum += arr[i];
    }
    for (int i = 0; i <= size; i++)
    {
        range_sum += i;
    }

    cout << "The element not present in the array " << range_sum - arr_sum;
}*/

/*int findminSum(int arr1[], int arr2[], int size1, int size2)
{
    int min = arr1[0];
    int index1;
    for (int i = 0; i < size1; i++)
    {
        if (min > arr1[i])
        {
            min = arr1[i];
            index1 = i;
        }
    }

    int min1 = arr2[0];
    int index2;
    for (int i = 0; i < size2; i++)
    {
        if (min1 > arr2[i])
        {
            min1 = arr2[i];
            index2 = i;
        }
    }

    if (index1 != index2)
    {
  //      return min1 + min2;
    }
    
}*/

int main()
{
    // int arr[] = {0, 1, 2, 4, 6, 5, 8, 3};
    // int size = sizeof(arr) / sizeof(arr[0]);

    int arr1[] = {5, 6, 10, 4, 9};
    int arr2[] = {1, 2, 3, 4, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    //int sum = findminSum(arr1, arr2, size1, size2);
    cout << "The minimum sum is " << sum;

    return 0;
}