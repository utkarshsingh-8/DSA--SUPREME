// SORT EVEN INTEGERS AT THE BEGINNING OF THE ARRAY FOLLOWED BY THE ODD

#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

// 1ST METHOD (Using another vector) 🙂🙂🙂
/*void sort_the_array(vector<int> &v, int size)
{
    vector<int> v1(size);

    int even_count = 0, i, j = 0;
    for (i = 0; i < size; i++)
    {
        if (v[i] % 2 == 0)
        {
            v1[j++] = v[i];
            even_count++;
        }
    }
    j = even_count;
    for (i = 0; i < size; i++)
    {
        if (v[i] % 2 != 0)
        {
            v1[j++] = v[i];
            even_count++;
        }
    }
    print_array(v1, size);
}*/

// 2ND METHOD (Manipulation in the same array🙂🙂🙂
/*void sort_the_array(vector<int> &v, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        if (v[start] % 2 == 1 && v[end] % 2 == 0)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
        else if (v[start] % 2 == 0)
        {
            start++;
        }
        else if (v[end] % 2 == 1)
        {
            end--;
        }
    }
    print_array(v, size);
}*/

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Input the values in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //sort_the_array(v, n);

    return 0;
}