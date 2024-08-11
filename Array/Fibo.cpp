#include <bits/stdc++.h>
using namespace std;

int *fiboArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            arr[i] = i;
        else
            arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr;
}

int main()
{
    int n;
    cout << "Enter the length of fibonacci series:";
    cin >> n;
    int arr[n];
    int *ptr=fiboArray(arr,n);
    for(int i=0;i<n;i++)
     {
     cout<<*ptr++<<" ";
     }
    return 0;
}
