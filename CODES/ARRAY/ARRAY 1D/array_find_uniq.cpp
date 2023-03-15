// FIND UNIQUE ELEMENT IN THE ARRAY WHEN ALL OTHER ELEMENT APPEAR TWICE

#include <iostream>
#include <vector>
using namespace std;

int unique_Element(vector<int> v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter  the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int uniqueElement = unique_Element(v);

    cout << "Unique element is: " << uniqueElement;
}