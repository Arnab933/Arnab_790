/*
    We already know that int,char,float,double are different different data type in c/cpp.If we declare a variable like int a
    Then all characteristics of integer will be carried on by "a" means it can't be fraction value,it's range will be
    -32,768 to 32,767(int 32 bit gcc compiler).
    It means it's characteristics are already pre defined by c/cpp developer.We also can make data dype manually and also we 
    can define characteristics of this data type.Its called user defined data type.

    Class: Class is a user defined data type.Using class we can create data type manually.Class is the blue print of this manually 
    created data type means what will be the characteristics of this data type that will be defined this class.      
 */



#include<iostream>
#include<cstring>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int price;
};
/*
    Here Car is a class means user defined data type.The characteristics of this car data types are:That car's must be have a name,color
    and price.
*/


int main(){
    Car EvCar;
    EvCar.name = "TataPunch";
    EvCar.color = "Blue";
    EvCar.price = 1200000;
    
    cout<<"The name of the car is:"<<EvCar.name<<endl;
    cout<<"The color of the car is:"<<EvCar.color<<endl;
    cout<<"The price of the car is:"<<EvCar.price<<endl;
  return 0;
}