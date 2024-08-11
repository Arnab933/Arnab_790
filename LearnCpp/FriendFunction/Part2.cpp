#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
private:
    int a;

public:
  void setData1(int x){
   a=x;
  }
    void show1()
    {
        cout << "The value of the a is:" << a << endl;
    }
    friend void fun(A, B);
};
class B
{
private:
    int b;

public:
void setData2(int y){
    b=y;
}
    void show2()
    {
        cout << "The value of the b is:" << b << endl;
    }
       friend void fun(A, B);
};
void fun(A a1,B b1){
    cout<<"The sum of the a and b is:"<<a1.a+b1.b;
}
int main()
{
    A aa;
    B bb;
    aa.setData1(10);
    aa.show1();
    bb.setData2(20);
    bb.show2();
    fun(aa,bb); 
    return 0;
}