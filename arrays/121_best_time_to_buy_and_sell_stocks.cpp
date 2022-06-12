#include <bits/stdc++.h>
using namespace std;

// time complexity O(n^2)
// space Complexity O(1)
int stocks(vector<int> &arr)
{
    int MAX = INT_MIN;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            MAX = max(MAX, arr[j] - arr[i]);
        }
    }
    if (MAX > 0)
        return MAX;
    return 0;
}

// time complexity O(n)
// space Complexity O(1)
int stockoptimal(vector<int> &arr)
{
    int maxprofit = 0;
    int minsofar = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        minsofar = min(minsofar, arr[i]);
        int profit = arr[i] - minsofar;
        maxprofit = max(maxprofit, profit);
    }
    return maxprofit;
}

int main()
{
    vector<int> n = {7, 1, 5, 3, 6, 4};
    cout << stocks(n) << endl;
    cout << stockoptimal(n) << endl;
    return 0;
}
