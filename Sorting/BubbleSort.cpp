#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);
            check = true;
        }
        if (check == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    return 0;
}