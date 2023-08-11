#include <bits/stdc++.h>
using namespace std;

int *Selection(int *arr, int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
    return arr;
}

int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *newarr = Selection(arr, n);
    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << newarr[i] << " ";
    }
    return 0;
}