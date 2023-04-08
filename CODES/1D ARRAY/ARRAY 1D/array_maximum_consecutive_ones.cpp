// FIND MAXIMUM CONSECUTIVE 1`s IN AN ARRAY

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &v)
{
    int max = 0;
    int count = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == 1)
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return max;
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

    cout << "The maximum number of consecutive 1`s in the array is: " << findMaxConsecutiveOnes(v);
}