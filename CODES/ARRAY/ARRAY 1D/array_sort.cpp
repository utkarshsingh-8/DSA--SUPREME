// SORT THE GIVEN ARRAY

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
}

// 1ST METHOD
/*void sort_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    print_array(v,size);
}*/

// 2ND METHOD
/*void sort_array(vector<int> v, int size)
{
    int start = 0, end = size - 1, i = 0;
    vector<int> v1(size);

    while (start <= end)
    {
        if (v[start] < v[end])
        {
            v1[i++] = v[start];
            start++;
        }
        else
        {
            v1[i++] = v[end];
            end--;
        }
    }
    print_array(v1, size);
}*/

int main()
{
    vector<int> v = {88, -5, 67, -77, 30, 1, 0, 55};

    cout << endl;
    cout << "The array before sorting is :" << endl;
    int size = v.size();
    print_array(v, size);

    cout << endl;
    cout << "The array after sorting is" << endl;
    //sort_array(v, size);
}