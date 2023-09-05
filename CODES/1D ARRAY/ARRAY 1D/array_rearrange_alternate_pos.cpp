#include <bits/stdc++.h>
using namespace std;

// 1ST METHOD
/*void reArrange(vector<int> &v)
{
    sort(v.begin(),v.end());

    int start=0,end=v.size()-1;

    while(start<=end)
    {
        swap(v[start],v[end]);
        start+=2;
        end-=2;
    }

    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
}*/

// 2ND METHOD
/*void reArrange(vector<int> &v)
{
    int start = 0, end = v.size() - 1;

    while (start <= end)
    {
        if (start % 2 == 0)
        {
            if (v[start] > -1)
            {
                start++;
            }
            else
            {
                if (v[start] <= -1)
                {
                    if (v[end] > -1)
                    {
                        swap(v[start], v[end]);
                        start++;
                        end--;
                    }
                    else
                    {
                        end--;
                    }
                }
            }
        }
        else
        {
            if (v[start] <= -1)
            {
                start++;
            }
            else
            {
                if (v[start] > -1)
                {
                    if (v[end] <= -1)
                    {
                        swap(v[start], v[end]);
                        start++;
                        end--;
                    }
                    else
                    {
                        end--;
                    }
                }
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}*/

void reArrange(vector<int> &v)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        if (v[start] <= -1 && v[end] > -1)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
        else if (v[start] > -1)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    int startt = 1, endd = v.size() - 1;
    while (startt < endd)
    {
        swap(v[startt], v[endd]);
        startt += 2;
        endd -= 2;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {0, 1, -5, 8, -3, -2, -9, 2};
    cout << "The Vector after arranging the alternate elements in the array" << endl;
    reArrange(v);
}