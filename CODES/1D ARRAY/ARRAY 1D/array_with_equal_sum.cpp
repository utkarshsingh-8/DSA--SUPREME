// PARTITION THE GIVEN ARRAY INTO TWO SUBARRAY WITH EQUAL SUM

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

void sub_array(vector<int> &v)
{

    int prefix_sum = 0, suffix_sum = 0, total_sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        suffix_sum = total_sum - prefix_sum;
        if (suffix_sum == prefix_sum)
        {
            cout << "Partition the Array into two subarray" << endl;
            cout << "Index at which partition is possible is " << i << endl;
        }
    }
}

int main()
{
    vector<int> v = {5, 3, 0, 2, 1, 3, 2};
    sub_array(v);
    cout << endl;
}