#include<iostream>
#include<stdlib.h>
using namespace std;

int partition(int *arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    if(low < high){
        while (arr[i] <= pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if( i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = arr[i];
            }
    }
        swap(arr[low],arr[j]);
    return j;
}

void quickSort(int *arr,int low,int high){
    if(low < high){
        int pivotIdx = partition(arr,low,high);
        quickSort(arr,low,pivotIdx - 1);
        quickSort(arr,pivotIdx + 1,high);
    }
}


int main(){
    int n = 0;
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter elements of the arrays:"<<endl;
    for (int i = 0; i < n; i++)
            cin>>arr[i];
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}