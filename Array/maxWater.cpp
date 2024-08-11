#include<iostream>
#include<stdlib.h>
#include<vector>
#include<unordered_map>
using namespace std;
 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = 0;
      

        int area = 0,maxArea = 0;
        j = height.size() - 1;
        int i = 0;
        while(i < j){
            area = min(height[i],height[j])*(j-i);
            maxArea = max(area,maxArea);
            if(height[i] > height[j])
                j--;
            else
                i++;
        }
        return maxArea;
    }
};




int main(){
    
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(height);



  return 0;
}