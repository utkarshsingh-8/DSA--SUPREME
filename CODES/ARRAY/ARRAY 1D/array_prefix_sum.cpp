// PREFIX SUM THE ARRAY WITHOUT CREATING NEW ARRAY

#include <iostream>
#include <vector>
using namespace std;

void prefix_sum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    prefix_sum(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}