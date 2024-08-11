#include <bits/stdc++.h>
using namespace std;

class Integer
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void getData()
    {
        cout << "The value of the a is:" << a<<endl;
    }
    Integer operator++()
    {
        Integer i;
        i.a = a + 1;
        return i;
    }
};
int main()
{
    Integer i1, i2;
    i1.setData(10);
    i1.getData();
    i2 = ++i1;//i2=i1.operator++();
    i1.getData();
    i2.getData();
    return 0;
}