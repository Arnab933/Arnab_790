#include <iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i] += 1;
            return arr;
        }
        arr[i] = 0;
    }
    vector<int> arr2;
    int p = 0;
    for (int i = 0; i < arr.size() + 1; i++)
    {
        if (i == 0)
            arr2[i] = 1;
        else
            arr2[i] = arr[p++];
    }
    return arr2;
}
int main()
{
    vector<int> arr = {3,1, 9, 9};
    for (int i : plusOne(arr))
    {
        cout << i << " ";
    }
    return 0;
}