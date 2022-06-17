#include <bits/stdc++.h>
using namespace std;

int maxProfit2(vector<int> &P)
{
    int profit = 0;
    for (int i = 1; i < P.size(); i++)
        if (P[i] > P[i - 1])
            profit += P[i] - P[i - 1];
    return profit;
}
int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    cout << maxProfit2(v);
    return 0;
}
