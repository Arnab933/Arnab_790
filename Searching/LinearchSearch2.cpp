#include <bits/stdc++.h>
using namespace std;

int search(int*arr,int n,int item){
    for(int i=0;i<n;i++)
     {
       if(arr[i]==item)
       return 1;
     }
     return -1;
}

int main()
{
  int*arr=new int[5];
  for(int i=0;i<5;i++)
   {
   cin>>arr[i];
   }
   int item;
   cin>>item;
   if(search(arr,5,item)==1){
    cout<<"The item is founed";
   }
   else{
    cout<<"The item is not founded";
   }

return 0;
}