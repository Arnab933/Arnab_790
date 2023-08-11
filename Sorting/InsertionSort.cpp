#include <bits/stdc++.h>
using namespace std;

void Insertion(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0 && j < n; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of the array:";
    cin>>n;
    int *arr = new int[n];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Insertion(arr, n);
    return 0;
}