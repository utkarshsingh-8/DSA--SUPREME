// ROTATE A GIVEN ARRAY BY 'K' STEPS WHERE RIGHT (K>0 && K>N) --> N IS(SIZE OF ARRAY)

#include <bits/stdc++.h>
using namespace std;

//PRINT THE ARRAY
void print_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

// 1ST METHOD
/*void right_rotate_array(vector<int> &v, int size, int k)
{
    vector<int> new_v(size);

    int j = 0;
    for (int i = size - k; i < size; i++)
    {
        new_v[j++] = v[i];
    }

    for (int i = 0; i < size - k; i++)
    {
        new_v[j++] = v[i];
    }
    print_array(new_v, size);
}*/

// 2ND METHOD
/*void right_rotate_array(vector<int> v, int size, int k)
{
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    print_array(v, size);
}*/

// 3RD METHOD
/*void right_rotate_array(vector<int> &v, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            cout << v[n + i - k] << " ";
        }
        else
        {
            cout << (v[i - k]) << " ";
        }
    }
}*/

int main()
{
    int n;
    cout << "Enter the size of the Array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << endl;
    cout << "Enter the steps you want to rotate the array: " << endl;
    cin >> k;
    k = k % n;

    cout << "The array after the rotate by k steps: " << endl;
    right_rotate_array(v, n, k);
}