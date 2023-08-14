#include <bits/stdc++.h>
using namespace std;

int checAcending(int *arr, int n, int size, int start)
{
    if (--size >= 0 && n > start)
    {
        if (arr[start] < arr[++start])
            return checAcending(arr, n, size, start);
        else
            return -1;
    }
    else
        return 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int start = 0;
    // if (checAcending(arr, size, size, start) != 1)
    // {
    //     cout << "The array is not sorted";
    // }
    // else
    // {
    //     cout << "The array is sorted";
    // }
    cout << checAcending(arr, size,size, start);
    return 0;
}