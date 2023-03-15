// FIND THE MAJORITY ELEMENT IN THE ARRAY

#include <iostream>
#include <vector>
using namespace std;

void majority_element(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int count_ele = 0;

        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count_ele++;
            }
        }
        if (count_ele > v.size() / 2)
        {
            cout << "The Majority element in the array is : " << v[i];
            break;
        }
    }

    //cout << "No Majority element exist";
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
    majority_element(v);
}