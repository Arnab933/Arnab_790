//what is operator overloading  in c++?
#include <iostream>

using namespace std;

class MyClass {
  
private:
  int m_data;
public:
  MyClass(int data) {
    m_data = data;
  }

  MyClass( MyClass &myclass1) {
    m_data = myclass1.m_data;
  }

  int getData()  {
    return m_data;
  }

};

int main() {
  MyClass myClass1(10);
  MyClass myClass2(myClass1);

  cout << "myClass1.getData() = " << myClass1.getData() << endl;
  cout << "myClass2.getData() = " << myClass2.getData() << endl;

  return 0;
}