#include <bits/stdc++.h>
using namespace std;

vector<int> findElement(vector<int> &v, int target, int index)
{
    if (index++ == v.size())
        return vector<int>();
    if (v[index++] == target)
    {
        vector<int> v2;
        for (int i = 0; i < index; i++)
        {
            v2.push_back(v[i]);
        }
        return v2;
    }
    else
        return findElement(v, target, index);
}

int main()
{
    vector<int> v;
    int size;
    cout << "Enter size of the vector:";
    cin >> size;
    int a;
    cout << "Enter the elements of the vector:";
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int target;
    cout << "Enter the target element:";
    cin >> target;
   
    if (findElement(v, target, 0).empty())
        cout << "The element does't exist";
    else{
       for(int i:findElement(v, target, 0))
        cout<<i<<" ";
    }
    return 0;
}