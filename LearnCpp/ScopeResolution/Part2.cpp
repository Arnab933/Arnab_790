#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    void fun();
};
void Complex::fun()  // we can access the member function outside of the class using scope resolution operator
{
    cout << "The fun method is called";
}
int main()
{
    Complex c1;
    c1.fun();
    return 0;
}