#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(51);
    s.insert(52);
    s.insert(51);
    s.insert(52);
    s.insert(5);
    vector<int> v;
    for (int i : s)
    {
        v.push_back(i);
    }
    int arr[]={1,1,2,2,2};
    for (int i : v)
        cout << i << " ";
    return 0;
}