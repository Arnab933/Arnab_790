#include <bits/stdc++.h>
using namespace std;
/*the scope resolution operator is used for access the global variable */
int n = 50;
int main()
{
    int n = 100;
    cout << "The value of the local variable is:" << n << endl;
    cout << "The value of the global variable is:" << ::n; // here print n = 50
    return 0;
}