#include <iostream>
#include<vector>
using namespace std;

void count_element(vector<int> v)
{
    int zero_count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zero_count++;
        }
    }

    int one_count = v.size() - zero_count;
    cout << zero_count << " and " << one_count;
}

int main()
{

    vector<int> v = {0, 1, 0, 0, 1, 1, 0, 0, 0};
    cout << endl;

    cout << "The count of 0`s and 1`s in Array is :";
    count_element(v);

}