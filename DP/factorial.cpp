#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
 
int main(){
    int n = 0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    vector<int>dp(n,-1);
    for(auto i:dp)
        cout<<i<<" ";

  return 0;
}