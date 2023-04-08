// SWAP ALTERNATE ELEMENT

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void swap_alternate_ele(vector<int> &v)
{

    for (int i = 0; i < v.size(); i = i + 2)
    {
        if (i + 1 < v.size())
        {
            swap(v[i], v[i + 1]);
        }
    }
}

int main()
{

    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << endl;
    print_array(v);
    cout << endl;

    cout << "The Array after the swap of the alternate element:" << endl;
    swap_alternate_ele(v);
    print_array(v);

    return 0;
}