// COUNT THE OCCURENCE OF ELEMENTS STRICTLY GREATER THAN X

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(7);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter the element: ";
    cout << endl;
    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (x < i)
        {
            count++;
        }
    }
    cout << "The count of the element strictly greater than (x) is: " << count;
}