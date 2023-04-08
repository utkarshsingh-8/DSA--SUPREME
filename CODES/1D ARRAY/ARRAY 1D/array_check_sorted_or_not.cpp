// CHECK GIVEN ARRAY IS SORTED OR NOT

#include <iostream>
#include <vector>
using namespace std;

int arraySorted(vector<int> &v)
{

    for (int i = 0; i < v.size() - 1; i++)
    {
        if ((v[i] > v[i + 1]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    bool sorted = arraySorted(v);
    sorted == true ? (cout << "Sorted") : (cout << "Not sorted");
}