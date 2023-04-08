// 2D VECTOR

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // DECLARATION
    /*vector<vector<int>> arr;
    vector<vector<int>> arr1(3,vector<int>(5));
    vector<vector<int>> arr2(3,vector<int>(5,0));*/

    // INITIALISATION
    vector<vector<int>> arr2(3, vector<int>(5, 0));

    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr2[i].size(); j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}