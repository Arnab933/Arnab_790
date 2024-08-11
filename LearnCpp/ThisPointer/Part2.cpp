#include <bits/stdc++.h>
using namespace std;

// this is a keyword in c++.this is a local object pointer in every instance member function containg address of the
// caller object.this pointer can not be modify.
class Box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showDimension()
    {
        cout << "l=" << l << " b=" << b << " h=" << h;
    }
};
int main()
{
    Box smallBox;
    smallBox.setDimension(10, 15, 20);
    smallBox.showDimension();
    return 0;
}