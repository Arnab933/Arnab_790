#include<bits/stdc++.h>
using namespace std;

class Friend
{
    private:
    int a,b;
    public:
    void setData(int x,int y){
    a=x;
    b=y;
    }
    void getData(){
        cout<<"The value of the a is:"<<a<<" and the value of the b is:"<<b<<endl;
    }
    friend void fun(Friend);
};
void fun(Friend f){
 cout<<"The sum is:"<<f.a+f.b;
}
int main()
{
    Friend f1;
    f1.setData(10,20);
    f1.getData();
    fun(f1);
 return 0;
}