#include <bits/stdc++.h>
using namespace std;
vector<int> removeEle(vector<int> &arr, int val)
{
    int p = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]!= val)
        {
            arr[p]=arr[i];
            p++;
        }
    }
    cout<<"The non match elements are:"<<p<<endl;
    return arr;
}
int main()
{
    vector<int> arr = {3, 2, 2, 3};
    int value = 3;
    for(int i:removeEle(arr,value)){
        cout<<i<<" ";
    }
    return 0;
}