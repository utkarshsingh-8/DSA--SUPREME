// CHECK GIVEN ARRAY IS SORTED OR NOT

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    bool sorted = true;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if ((v[i] >= v[i + 1]))
        {
            sorted = false;
        }
    }

    (sorted == true) ? cout << "Array is sorted" : cout << "Array is not sorted";
}