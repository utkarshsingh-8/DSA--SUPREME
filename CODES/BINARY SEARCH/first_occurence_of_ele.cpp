// FIND THE FIRST OCCURRENCE OF AN ELEMENT IN THE ARRAY

#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (v[mid] == target)
        {
           
        }

        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    vector<int> v = {1, 3, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    cout << "The first occurrence of the target element in the array is: " << firstOccurrence(v, target);

    return 0;
}