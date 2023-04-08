// GIVEN AN INTEGER ARRAY SORTED IN NON-DECREASING ORDER,RETURN AN ARRAYS OF THE SQUARES OF EACH NUMBER SORTED IN NON-DECREASING ORDER

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
}

// 1ST METHOD
/*void sort_squared_array(vector<int> v, int size)
{
    int start = 0, end = size - 1, i;
    // FIRST MAKE THE VALUE ABSOLUTE IN THE ARRAY
    v[size]=abs(v[size]);

    // SECOND FIND THE SQUARES OF THE ABSOLUTE VALUE
    for (i = 0; i < size; i++)
    {
        v[i] = (v[i] * v[i]);
    }

    // THIRD SORT THE ARRAY IN NON-DECREASING ORDER
    for (i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    print_array(v, size);
}*/

// 2ND METHOD
void sort_squared_array(vector<int> &v, int size)
{
    int start = 0, end = size - 1;
    vector <int> v1(size);

    while (start < end)
    {
        if (abs(v[start]) < abs(v[end]))
        {
            v1.push_back(v[end] * v[end]);
            end--;
        }
        else
        {
            v1.push_back(v[start] * v[start]);
            start++;
        }
    }

    print_array(v1, size);
}

int main()
{
    vector<int> v = {-10, -5, 2, 6, 8};
    cout << endl;
    cout << "The values in the vector in sorted order is" << endl;
    int size = v.size();

    print_array(v, size);
    cout << endl;
    cout << "The squares of the values of vector in sorted order is ";
    sort_squared_array(v, size);
}