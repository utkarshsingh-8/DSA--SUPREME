// COUNT ELEMENTS WITH STRICTLY SMALLER AND GREATER ELEMENTS

#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int> &nums)
{
    int element_count = 0;
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > min && nums[i] < max)
        {
            element_count++;
        }
    }
    return element_count;
}

int main()
{
    int n;
    cout << "Enter the size of the Array" << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "The count of strictly greater and smaller element is: " << countElements(v);

    return 0;
}