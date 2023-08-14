#include <bits/stdc++.h>
using namespace std;

int findItem(int *arr, int target, int index, int size)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == target)
        return index;
    else
    {
        findItem(arr, target, index + 1, size);
    }
}

int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin >> n;
    int *arr = new int[n];
    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    if (findItem(arr, target, 0, n) == -1)
    {
        cout << "The target element is not found";
    }
    else
    {
        cout << "The target element is found at " << findItem(arr, target, 0, n) << "th index";
    }
    return 0;
}