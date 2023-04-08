// MOVE ALL NEGATIVE ELEMENTS ON ONE SIDE OF THE ARRAY

#include <iostream>
#include <vector>
using namespace std;

void moveNegativeEle(vector<int> &v)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        if (v[start] >= 0 && v[end] <= -1)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
        else if (v[start] <= -1)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {-12, 11, 0, -13, -5, 6, 0, -7, 5, -3, -6};
    cout << "THe Array after moving all the negative elements to the starting:" << endl;
    moveNegativeEle(v);
}