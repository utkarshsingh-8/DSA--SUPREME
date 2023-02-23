// FIND THE TOTAL NUMBER OF TRIPLETS IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE OF X

#include <iostream>
#include <vector>
using namespace std;

int target_sum(vector<int> v, int size, int x)
{
    int count_pair = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (x == (v[i] + v[j]) + v[k])
                {
                    count_pair++;
                }
            }
        }
    }
    return count_pair;
}

int main()
{

    vector<int> v = {3, 1, 2, 4, 0, 6};
    int size = v.size();

    int x;
    cout << "Enter the value of x :" << endl;
    cin >> x;

    cout << "The total number of triplets in the array whose value is equal to the sum of the value of x is : " << target_sum(v, size, x);
    cout << endl;
}