// FIND THE DIFFERENCE BETWEEN SUM OF THE ELEMENTS AT THE EVEN INDICES AND SUM OF THE ELEMENTS AT THE ODD INDICES (Consider 1-based indexing)

#include <iostream>
#include <vector>
using namespace std;

int absoluteDiff(vector<int> v)
{
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            sum_odd += v[i];
        }
        else
        {
            sum_even += v[i];
        }
    }

    int absDiff = sum_even - sum_odd;
    if (absDiff < 0)
    {
        absDiff = -(absDiff);
    }
    return absDiff;
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

    cout << "The Difference between the sum of the elements at the even indices and the sum of the elements at the odd indices is: " << absoluteDiff(v);
}