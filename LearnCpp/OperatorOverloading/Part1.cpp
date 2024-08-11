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
        cout << "The value of the a is:" << a << " and the value of the b is:" << b;
    }

    Complex add(Complex c2)
    {
        Complex c;
        c.a = a + c2.a;
        c.b = b + c2.b;
        return c;
    }

    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.a = a + c2.a;
        temp.b = b + c2.b;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(4, 6);
    // c3=c1+c2;
    // c3=c1.operator+(c2);
    // c3=c1+(c2);
    c3 = c1 + c2;
    c3.getData();
    return 0;
}