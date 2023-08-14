#include <bits/stdc++.h>
using namespace std;

void starPattern(int n)
{
    if (n < 0)
        return;
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    starPattern(n - 1);
}

void starPattern2(int n)
{
    if (n < 0)
        return;
    starPattern2(n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    starPattern2(n);
    return 0;
}