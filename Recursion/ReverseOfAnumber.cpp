#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int reverse(int n)
{
    if (n < 10)
        return n;
    else
    {
        return ((n % 10) * (int)pow(10, (int)log10(n))) + reverse(n / 10);
    }
}
//  if (n < 10)
//             return n;
//         else
//             return (n % 10) * (int) Math.pow(10, (int) Math.log10(n)) + reverse(n / 10);
int main()
{
    int n = 125;
    cout << reverse(n);
    return 0;
}