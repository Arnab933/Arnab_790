#include <bits/stdc++.h>
using namespace std;

class Fun
{
private:
    int a;
    static int b;

public:
    void setData(int x)
    {
        a = x;
    }
    void showData()
    {
        cout << "The value of the a and b is:" << a << " and " << b;
    }
};
int Fun::b;
int main()
{
    Fun f;
    f.setData(10);
    f.showData();
    return 0;
}