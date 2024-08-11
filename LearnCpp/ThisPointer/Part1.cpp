#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int l, b, h;

public:
    void setDimension(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void showDimension()
    {
        cout << "l=" << l << " b=" << b << " h=" << h;
    }
};
int main()
{
    // Box smallBox;
    // smallBox.setDimension(10,15,20);
    // smallBox.showDimension();
    Box *p,smallBox;
    p=&smallBox;
    p->setDimension(10,15,20);
    p->showDimension();
    return 0;
}