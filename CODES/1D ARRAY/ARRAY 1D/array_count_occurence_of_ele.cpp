// COUNT THE OCCURRENCE OF ANY ELEMENT X

#include <iostream>
#include <vector>
using namespace std;

int countOccurrence(vector<int> v, int ele)
{
    int count = 0;
    for (int element : v)
    {
        if (ele == element)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter the element you want to count  its occurrence in array: ";
    cout << endl;
    
    int ele;
    cin >> ele;
    cout << "The occurrence of the element in array is: " << countOccurrence(v, ele);
}