// FIND THE DIFFERENCE BETWEEN SUM OF THE ELEMENTS AT THE EVEN AND SUM OF THE ELEMENTS AT THE ODD INDICES

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            sum_even += v[i];
        }
        else
        {
            sum_odd += v[i];
        }
    }

    cout << "The Difference between the sum of the elements at the even indices and the sum of the elements at the odd indices is: " << sum_even - sum_odd;
}