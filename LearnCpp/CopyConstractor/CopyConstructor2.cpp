#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
        // cout << "The value of the a and b is:" << a << " and " << b;
    }
    Complex(int x)
    {
        a = x;
        // cout << "The value of the a is:" << a;
    }
    Complex()
    {
        a = 0;
        b = 0;
        // cout << "The value of the a and b is:" << a << " and " << b;
    }
    Complex(Complex &c)
    /*if we give the definition of the copy constructor like it "Complex(Complex c)"  then we know that internally the calling object assigned like
    it Complex c8=c1; or Complex c8(c1) then implicitly agin called this constructor and running it like recursion.That's for we have to initialize it like
    reference variable */
    {
        a = c.a;
        b = c.b;
    }
    void showData()
    {
        cout << "The value of the a and b is:" << a << " and " << b;
    }
};

int main()
{
    Complex c1(12, 13), c2(10, 12), c3(10), c4;
    // c1.showData();
    // c2.showData();
    // Complex c5;  //default argumrnt constructor
    // c5.showData();
    // Complex c6=4; //single argument constructor
    // c6.showData();
    // Complex c7=c1;//we can also write that
    // c7.showData();

    Complex c7(c1);//here c7 is a constructor and c1 as argument but here nothing any constructor that takes an object
    // as argument that's Complex type.So question is comes any error?.No here one constructor is running that is created
    // by compiler.if we doesn't By default,compiler creates two constructor that's are default constructor and copy
    // constructor.

    /*If we creates any default constructor and copy constructor then the compiler created consturctor dosn't call*/
    // c7.showData();
    // now i create a copy constructor.
    // Complex c8(c1);
    // c8.showData();
    return 0;
}