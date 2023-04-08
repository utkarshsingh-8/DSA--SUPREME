// GIVEN AN ARRAY CONSISTING OF 0`s ,1`s and 2`s SORT THEM IN ASCENDING ORDER
//(DUTCH NATIONAL FLAG PROBLEM)

#include <iostream>
#include <vector>
using namespace std;

// 1st METHOD
/*void sortArray(vector<int> &v)
{
    int zero_cnt = 0, one_cnt = 0, two_cnt = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == 0)
        {
            zero_cnt++;
        }
        else if (v[i] == 1)
        {
            one_cnt++;
        }
        else
        {
            two_cnt++;
        }
    }

    vector<int>v1;
    for (int i = 0; i < zero_cnt; ++i)
    {
        v1.push_back(0);
    }
    for (int i = 0; i < one_cnt; ++i)
    {
        v1.push_back(1);
    }
    for (int i = 0; i < two_cnt; ++i)
    {
        v1.push_back(2);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

}*/

// 2nd METHOD
void sortArray(vector<int> &v)
{
    int low = 0, mid = 0;
    int high = v.size() - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[high], v[mid]);
            high--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {1, 0, 2, 1, 0, 0, 1, 1, 2, 0, 0};
    cout << "THe Array after Sorting:" << endl;
    sortArray(v);
}