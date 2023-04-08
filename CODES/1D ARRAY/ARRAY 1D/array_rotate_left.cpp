// ROTATE A GIVEN ARRAY BY 'K' STEPS  LEFT WHERE (K>0 && K>N) --> N IS(SIZE OF ARRAY)

#include <bits/stdc++.h>
using namespace std;

// PRINT THE ARRAY
void print_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

// 1ST METHOD
/*void left_rotate_array(vector<int> v, int size, int k)
{
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.end() - k);
    reverse(v.end() - k, v.end());
    print_array(v, size);
}*/

// 2ND METHOD
/*void left_rotate_array(vector<int> &v, int size, int k)
{
    vector<int> new_v(size);

    int j = 0;
    for (int i = k; i < size; i++)
    {
        new_v[j++] = v[i];
    }

    for (int i = 0; i < k; i++)
    {
        new_v[j++] = v[i];
    }
    print_array(new_v, size);
}*/

// 3RD METHOD
/*void left_rotate_array(vector<int> &v, int n, int k)
{
    for (int i = n; i > 0; i--)
    {
        if (i > k)
        {
            cout << v[n - i + k] << " ";
        }
        else
        {
            cout << v[k-i] << " ";
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
    left_rotate_array(v, n, k);
}