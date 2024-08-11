#include <bits/stdc++.h>
using namespace std;
#include <fstream>

int main()
{
    string st;
    ifstream in("sample1.txt"); // here ifstream means input file stream that's helps us to take input from any others file
    //  in>>st;
    //  cout<<st;//here the output only the first words of the line
    // if we want to read the line properly then we have to use  the getline method of the ifstream
    getline(in, st); // here output will be the first line of the text
    cout << st;
    cout << endl;
    getline(in, st); // here output will be the second line of the text,and so on.
    cout << st;
    return 0;
}