#include <bits/stdc++.h>
using namespace std;

int *BubbleSort(int *arr, int length, int start)
{
    if (length == 0)
        return &arr[0];
    if (length > start)
    {
        if (arr[start] > arr[start + 1])
            swap(arr[start], arr[start + 1]);
        BubbleSort(arr, length, ++start);
    }
    else
        BubbleSort(arr, --length, 0);
    return arr;
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int length = 5;
    int start = 0;
    int *arr2 = BubbleSort(arr, 5, 0);
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}