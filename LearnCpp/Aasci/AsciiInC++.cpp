#include <iostream>
using namespace std;

int main()
{
    cout << (int)'a' << endl; // we can also write int('a')
    cout << (int)'b' << endl;
    cout << (int)'A' << endl;
    cout << (char)65 << endl;
    for (int i = 1; i <= 128; i++)
    {
        cout << i << "=" << (char)i << endl; // A-Z=65-90 and a-z=97-122
    }
    char c1,c2,c3,c4,c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout<<"ASCII message:"<<(int)c1<<" "<<(int)c2<<" "<<(int)c3<<" "<<(int)c4<<" "<<(int)c5<<" "<<endl;
    cout<<"ASCII message:"<<(int)c1<<(int)c2<<(int)c3<<(int)c4<<(int)c5<<endl;
    return 0;
}