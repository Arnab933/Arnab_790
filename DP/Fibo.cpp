#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
 
int fibo(int n,int*dp){
    if(n <= 1)
        return n;
    
    if(dp[n] != -1)
        return dp[n];

    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
}



int main(){
    int n = 0;
    cout<<"Enter the number to display the fibonacci sequence:"<<endl;
    cin>>n;
    int *dp = new int[n+1]; // also vector<int>dp(n,-1);  ---> all values will be -1
    fill(dp,dp+n,-1);
    
    for (int i = 0; i < n; i++)
    {
        cout<<fibo(i,dp)<<" ";
    }
    
  return 0;
}