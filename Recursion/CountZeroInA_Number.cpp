#include <bits/stdc++.h>
using namespace std;

static int c = 0;
void countZero(int n,int digit)
{
    if (digit== 0)
        return;
    else if (n % 10 == 0)
    {
        c++;
        countZero(n/10,--digit);
    }
    else
        countZero(n/10,--digit);
}
int main()
{
    int n = 100340;
    int digit=(int)log10(n) + 1 ;
    countZero(n,digit);
    cout << c;
    return 0;
}