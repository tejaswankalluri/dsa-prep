#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int l = 0;
    for (int r = 0; r < nums.size(); r++)
    {
        if (nums[r] != 0)
        {
            swap(nums[r], nums[l]);
            l++;
        }
    }
}

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    moveZeroes(v);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}