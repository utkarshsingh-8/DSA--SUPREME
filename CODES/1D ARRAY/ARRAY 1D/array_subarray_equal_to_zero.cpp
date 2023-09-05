#include <iostream>
#include <vector>
using namespace std;

// 1st method
/*int subArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;

        for (int j = i; j < v.size(); j++)
        {
            sum += v[j];
            if (sum == 0)
            {
                return 1;
            }
        }
    }

    return -1;
}*/

bool subArray(vector<int> &v)
{
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
        if (sum == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int> v = {4, 2, 1, -3, 5};
    if (subArray(v))
    {
        cout << "Subarray == '0' is present";
    }
    else
    {
        cout << "No Subarray is present";
    }
}