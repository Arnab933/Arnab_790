//overloading as a friend function
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "the value of the a is:" << a << " and the value of the b is:" << b;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return c;
}
int main()
{
    Complex c1, c2, c3;
    c1.setData(10, 20);
    c2.setData(30, 40);
    // c3 = operator+(c1, c2);also we can write that
    c3 = c1 + c2;
    c3.getData();
    return 0;
}