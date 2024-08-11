/*Textfile:Textfile is a sets of characters/data.That's write in a pattern.
 */
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
/*The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream---->derived from fstreambase
3.ofstream-->derived from fstreambase
In order work with files in c++,you will have to open it.Primilarly,there are 2 ways to open  a file :
1.using constructor
2.using member function open() of the class */
int main()
{
    string str = "Arnab Pratihar is a student of Midnapore Collage(autonomous)";
    // openng file using constructor.
    ofstream out("sample1.txt");//here ofstream means output stream that's helps us for gives the output,means we 
    //writing any text in a file 
    out << str;
    cout<<str;
    return 0;
}