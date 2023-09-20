// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array

#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(vector<int> v)
{
    int count = 0;
    int maxi = 0;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == 1)
            count++;

        else
            count = 0;

        maxi = max(maxi, count);
    }

    return maxi;
}

int main()
{
    vector<int> v = {1, 1, 0, 1, 1, 1};
    cout << maxConsecutiveOnes(v);
}
