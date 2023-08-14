#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (v[mid] < target)
        return BinarySearch(v, target, mid + 1, end);
    else if (v[mid] > target)
        return BinarySearch(v, target, start, mid - 1);
    else
        return mid;
}

int main()
{
    int n;
    cout << "Enter size of the array:"<<endl;
    cin >> n;
    vector<int> v;
    int a;
    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int target;
    cout << "Enter the target element:"<<endl;
    cin >> target;
    if (BinarySearch(v, target, 0, n - 1) == -1)
        cout << "The target element is does't exist";
    else
        cout << "The element is found at " << BinarySearch(v, target, 0, n - 1) << "th index";
    return 0;
}