#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Enter the five letters:";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout<<"ASCII message:";
    cout << (int)c1 << (int)c2 << (int)c3 << (int)c4 << (int)c5;
    return 0;
}