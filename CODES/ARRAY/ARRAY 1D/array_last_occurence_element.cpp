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
    
    cout << "Enter the element you want to find its last occurence" << endl;
    int ele;
    cin >> ele;

    int j = -1;
    /*for (int i = 0; i < v.size(); i++)
    {
        if (ele == v[i])
        {
            j=i;
        }
    }*/
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (ele == v[i])
        {
            j = i;
            break;
        }
    }
    cout << "The last index where the element is occured is: " << j;

}