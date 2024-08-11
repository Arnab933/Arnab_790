// Given an array of integers nums and an integer target, return indices of the two numbers such that they
// add up to target.
#include <bits/stdc++.h>
using namespace std;

vector<int> toSum(int arr[], int n, int target)
{
    int arr2[2];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {arr[i],arr[j]};
            }
        }
    }
}
int main()
{
    int arr[] = {3,2,4};
    int target = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i: toSum(arr, n, target)){
        cout<<i<<" ";
    }
    return 0;
}