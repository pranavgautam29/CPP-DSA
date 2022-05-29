#include<iostream>
using namespace std;

/*
Syntax for Multiple Inheritance
class derived : visibility mode base-class1 , visibility mode base-class2
*/
class Base1{
    protected:
    int base1int ;
    public:
    void set_base1int(int a){
        base1int = a;
        

    }
};
class Base2{
    protected:
    int base2int ;
    public:
    void set_base2int(int b){
        base2int = b;
    }
};
class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The value of Base 1: "<<base1int<<endl;
        cout<<"The value of Base 2: "<<base2int<<endl;
    }
};
int main()
{
    Derived object;
    object.set_base1int(10);
    object.set_base2int(100);
    object.show();
    

    return 0;
}