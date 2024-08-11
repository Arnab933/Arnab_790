#include<iostream>
using namespace std;

int removeDuplicate(int *arr,int n){
    int left = 0,right = 1;
    while(right < n){
        if(arr[left] != arr[right]){
            left++;
            swap(arr[left],arr[right]);
        }
        right++;
    }
    return left+1;
}


int main(){
    int arr[]={1,1,2,3,3,4,5,5};
    int n = removeDuplicate(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}