#include<iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int>&nums){
    if(nums.size() <= 2) return nums.size();
    int left = 0,right = 1;
    while(right <= nums.size()){
        if(nums[left] != nums[right]){
            nums[++left] = nums[right];
        }
        right++;
    }
    return left;
} 



int main(){
    vector<int>arr = {1,1};
    cout<<removeDuplicate(arr)<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }
  return 0;
}