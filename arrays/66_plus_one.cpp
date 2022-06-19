#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return digits;
        }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
}

int main()
{
    vector<int> digits = {1, 2, 3};
    vector<int> sum = plusOne(digits);
    for (int &x : sum)
    {
        cout << x << " ";
    }
    return 0;
}