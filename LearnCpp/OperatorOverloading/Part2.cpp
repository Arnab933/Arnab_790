#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<"The value of the a is:"<<a<<" and the value of the b is:"<<b; 
    }
    Complex operator -(){
        Complex c;
        c.a=-a;
        c.b=-b;
        return c;
    }
};
int main()
{
Complex c1,c2,c3;
c1.setData(3,5);
// c2=-c1; also we can write that 
c2=c1.operator-();
c2.getData();
 return 0;
}