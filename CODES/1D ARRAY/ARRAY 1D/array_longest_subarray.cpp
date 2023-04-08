// Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

#include <iostream>
#include <vector>
using namespace std;

// POSITIVE VALUES
int longestSubArray(vector<int> &v, int k)
{
    int maxlength = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            sum += v[j];
            if (sum == k)
            {
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }
    return maxlength;
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

    int k;
    cout << "Enter the value of the K:" << endl;
    cin >> k;

    cout << "The longest subarray that is equal to the possible sum K is : " << longestSubArray(v, k);
}