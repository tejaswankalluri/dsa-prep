#include <bits/stdc++.h>
using namespace std;
// O(n^2)
bool Duplicate(int arr[], int n)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
                return true;
        }
    }
    return false;
}
// O(n)
bool DuplicateHashMap(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    if (mpp.size() == n)
        return false;
    else
        return true;
}

int main()
{
    int arr[] = {1, 2, 3, 1};
    cout << Duplicate(arr, 4) << endl;
    cout << DuplicateHashMap(arr, 4) << endl;
    return 0;
}
