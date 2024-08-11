#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    int a;
    static int b;

public:
    void setData(int x)
    {
        a = x;
    }
    void setStatic(int y) // method for initialize the static member b;
    {
        b = y;
    }
    void showData()
    {
        cout << "The value of the a and b is:" << a << " and " << b<<endl;
    }
};
/*when the object of the class is created then the normal instance variables are gets the memory but the static variables
are dosen't depend on whether the object is created or not.It always occupy the memory at compile time.
That's for we have to declare the staitc variable using the scope resolution operator.*/
int Account::b; // declaration of the static variable.
int main()
{
    Account a1,a2;
    // a1.setData(10);
    // a1.setStatic(20);//we can perform the initialisation throgh the setter. 
    // a1.showData();
    // a2.setData(10);
    // a2.showData();//also here the value of the b is 20
    // Account::b=20; we can this initialisation when the static variable is public 

    /*But the problem is we know that the static variable is created in compile time.So,it dosen't depends on the 
    object.So,if the object is not created then we can't call the setter method.Then we have to find the another 
    process to initialise the static variable.*/
    return 0;
}