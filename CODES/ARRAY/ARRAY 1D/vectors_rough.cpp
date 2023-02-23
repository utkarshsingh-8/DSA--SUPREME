#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // DECLARATION
    vector<int> v;
    vector<int> v1(5);
    v1.resize(7);

    cout << "Vector size and Vector capacity is :" << endl;
    cout << v.size() << " " << v.capacity() << endl;
    cout << v1.size() << " " << v1.capacity() << endl;

    // INPUTTING THE VALUES IN THE VECTOR
    // cout << "Enter the values in the vector:" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     v.push_back(ele);
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    cout << "Enter the values in the vector:" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    // PRINTING THE VALUES OF THE VECTOR
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    // v1.push_back(8);
    // v1.insert(v1.begin() + 2, 6);
    // v1.pop_back();
    // v1.erase(v1.end() - 4);

    // int j=0;
    // while (j < v1.size())
    // {
    //     cout<<v1[j++]<<" ";
    // }
}