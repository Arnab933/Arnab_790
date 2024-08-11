#include <iostream>
using namespace std;

int main()
{
    // Integer that is hole number in the format of negative and positive also
    int yearBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float aveargeGrade = 4.5; // in c++ float is the 4 bit data type
    // double is the double of the float means 8 bit;
    double balance = 345452232435;
    cout << "sizeOf the int is:" << sizeof(int) << " bytes\n";       // 4 bytes
    cout << "sizeOf the double is:" << sizeof(double) << " bytes\n"; // 8 bytes
    cout << "sizeof the float is:" << sizeof(float) << " bytes\n";   // 4 bytes
    cout << "sizeof the char is:" << sizeof(char) << endl;           // 1 bytes
    cout << "sizeof the boolean is:" << sizeof(bool) << endl;
    // every data's have its own max value
    cout << "the max value of the integer is:" << INT_MAX << endl;
    cout << "the min value of the integer is:" << INT_MIN << endl;
    // signed means only for the fositive value;
    cout << "the size of the unsigned int is:" << sizeof(unsigned int) << " bytes\n";
    // the max value of the unsigned int is the sum of the int_max and int_min
    cout << "The max value of the unsigned int is:" << UINT_MAX << endl;
    // note that the min value of the negative unsigned is 0;
    return 0;
}