#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(7);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter the element you want to count  its occurence in array: ";
    cout << endl;
    int ele;
    cin >> ele;

    int count = 0;
    for (int element : v)
    {
        if (ele == element)
        {
            count++;
        }
    }
    cout << "The occurence of the element in array is: " << count;
}