#include <bits/stdc++.h>
using namespace std;

int *cycleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    return arr;
}

int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements for cycle sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *newarr = cycleSort(arr, n);
    cout<<"The new sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << newarr[i] << " ";
    }
    return 0;
}