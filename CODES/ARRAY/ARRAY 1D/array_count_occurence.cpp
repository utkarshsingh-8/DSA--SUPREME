// COUNT ELEMENTS WITH STRICTLY SMALLER AND GREATER ELEMENTS

#include <bits/stdc++.h>
using namespace std;

// 1ST METHOD
/*int count_element(vector<int> v)
{
    int i, j, element_count = 0;

    for (i = 0; i < v.size(); i++)
    {
        int left = 0, right = 0;
        for (j = 0; j < v.size(); j++)
        {
            if (v[i] < v[j])
            {
                left++;
            }
            if (v[i] > v[j])
            {
                right++;
            }
        }
        if (left > 0 && right > 0)
        {
            element_count++;
        }
    }
    return element_count;
}*/

// 2ND METHOD
/*int count_element(vector<int> v)
{
    int element_count = 0;
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > min && v[i] < max)
        {
            element_count++;
        }
    }
    return element_count;
}*/

int main()
{
    int n;
    cout << "Enter the size of the Array:" << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    //cout << "The count of elements with strictly smaller and greater elements are: " << count_element(v);
}