// ROTATE A GIVEN ARRAY BY 'K' STEPS WHERE (K>0 && K>N) --> N IS(SIZE OF ARRAY)

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
/*void rotate_array(vector<int> &v, int size, int k)
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
    print_array(new_v,size);

}*/

// 2ND METHOD
/*void rotate_array(vector<int> v, int size, int k)
{
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    print_array(v, size);
}*/

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int size = v.size();

    int k;
    cout << endl;
    cout << "Enter the steps you want to rotate the array: " << endl;
    cin >> k;
    k = k % size;

    cout << "The array after the rotate by k steps: " << endl;
    //rotate_array(v, size, k);
}