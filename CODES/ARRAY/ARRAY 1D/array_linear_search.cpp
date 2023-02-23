#include <iostream>
using namespace std;

int search_element(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Index is :" << i;
            cout<<endl;
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int key;
    cout << endl;
    cout << "Enter the Key element you want to find:" << endl;
    cin >> key;
    bool var = search_element(arr, size, key);

    (var == true) ? (cout << "Element is Present") : (cout << "Element is not Present");

    return 0;
}