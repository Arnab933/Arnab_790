#include <bits/stdc++.h>
using namespace std;

static int c = 0;
int countStep(int n)
{
    if (n == 0)
        return c;
    if (n % 2 == 0)
    {
        c++;
        countStep(n / 2);
    }
    if (n % 2 != 0)
    {
        c++;
        countStep(n - 1);
    }
}

int main()
{
    int n = 14;
    countStep(n);
    cout << c;
    return 0;
}