#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n1, n2, n3;
    cout << "Enter size of the first string:";
    cin >> n1;
    char str1[n1];
    cout << "Enter the first string:";
    cin >> str1;
    cout << "Enter size of the second string:";
    cin >> n2;
    char str2[n2];
    cout << "Enter the second string:";
    cin >> str2;
    char str3[n1 + n2 + 1];
    int p = 0, q = 0;
    for (int i = 0; i < n1 + n2 + 1; i++)
    {
        if (str1[p] != '\0')
        {
            str3[i] = str1[p++];
        }
        else
        {
            str3[i] = str2[q++];
            if (i == n1 + n2)
            {
                str3[i] = '\0';
            }
        }
    }

    cout << "The concatinated String is:" << str3;
    return 0;
}