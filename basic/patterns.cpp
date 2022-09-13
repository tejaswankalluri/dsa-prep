// visit https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i;
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int spaces = i;
        for (int k = 1; k < spaces; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        int k = i > n ? 2 * n - i : i;
        int spaces = n - k;
        for (int i = 1; i <= spaces; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        int k = i > n ? 2 * n - i : i;
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool k;
        (i % 2 == 0) ? k = false : k = true;
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k == true ? k = false : k = true;
        }
        cout << endl;
    }
}
int main()
{
    pattern11(5);
    return 0;
}
