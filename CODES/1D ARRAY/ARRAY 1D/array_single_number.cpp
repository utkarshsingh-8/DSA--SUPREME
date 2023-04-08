// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <iostream>
#include <vector>
using namespace std;

/*void singleNumber(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << v[i];
        }
    }
}*/

void singleNumber(vector<int> &v) // using XOR OPERATOR
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans ^= v[i];
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "The number that appear once in the array is : ";
    singleNumber(v);
}