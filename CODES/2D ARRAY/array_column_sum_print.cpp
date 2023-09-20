#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ARRAY COLUMN SUM WISE PRINT

    vector<vector<int>> arr1 = {
        {1, 2, 3},
        {3, 4, 5}};

    int n = arr1.size();
    int m = arr1[0].size();

    vector<vector<int>> res(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[j][i] = arr1[i][j];
        }
    }

    cout << "Printing Column Wise:";
    for (int i = 0; i < res.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < res[0].size(); j++)
        {
            sum += res[i][j];
        }
        cout << endl;
        cout << sum;
    }
}