#include <bits/stdc++.h>
using namespace std;

int maximuWealth(vector<vector<int>> &accounts)
{
    int maxWealth = 0;
    int rows = accounts.size();
    int cols = accounts[0].size();
    for (int i = 0; i < rows; i++)
    {
        int wealth = 0;
        for (int j = 0; j < cols; j++)
        {
            wealth += accounts[i][j];
        }
        maxWealth = max(maxWealth, wealth);
    }
    return maxWealth;
}

int main()
{
    vector<vector<int>> vect{
        {1, 5},
        {7, 3},
        {3, 5}};
    cout << maximuWealth(vect) << endl;
    return 0;
}
