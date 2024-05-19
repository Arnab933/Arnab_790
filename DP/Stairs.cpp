#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int fun(int n,int* dp){
   if(n <= 1)
      return 1;
   if(dp[n] != -1)
      return dp[n];
   dp[n] = fun(n-1,dp) + fun(n-2,dp);
   return dp[n];
}


int climbStairs(int n){
   int*dp = new int[n+1];
   fill(dp,dp+n+1,-1);
   int result = fun(n,dp);
   
   delete(dp);
   return result;
}


int main(){
   int n = 15;
   cout<<climbStairs(n);
  return 0;
}