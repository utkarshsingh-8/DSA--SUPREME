// BUBBLE SORTING TECHNIQUE(in each round largest element is placed at the end of the array)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        bool swapped=false;
        for (int j = 0; j < v.size()-i; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(v[j] , v[j+1]);
                swapped=true;
            }
        } 
        if (swapped==false)
        {
            break;
        }
          
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    
}

int main()
{
    vector<int> v={4,8,1,12,0,7,6,-8,9};
    bubbleSort(v);
    return 0;
}