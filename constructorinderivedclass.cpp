#include<iostream>
using namespace std;

class Base1{
    int data;
    public:
    Base1(int i){
        data = i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printData1(void){
        cout<<"The value of data is "<<data<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i2){
        data2 = i2;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printData2(void){
        cout<<"The Value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1 , public Base2{
    int derived1 , derived2;
    public:
    Derived(int a ,int b,int c,int d): Base1(a) , Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printData3(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
        
    }
};

int main()
{
    Derived object(1,2,3,4);
    object.printData1();
    object.printData2();
    object.printData3();
    
    return 0;
}