#include<iostream>
using namespace std;
class Base{
    public:
    int var1;
    void display(){
        cout<<"Base class variable "<<var1<<endl;
    }
};
class Derived : public Base{
        public:
        int var2;
        void display(){
            cout<<"Derived class variable "<<var2<<endl;
            cout<<"Var1 "<<var1<<endl;
        }
};
int main()
{
    Base * base_pointer;
    Base obj1;
    Derived obj2;
    base_pointer = &obj2; // base class pointer pointing to derived class object
    base_pointer->var1 = 32;
    base_pointer->display(); // dereferncing the pointer 
    Derived * derived_pointer;
    derived_pointer = &obj2;
    derived_pointer->var2 = 92;
    derived_pointer->display();
    return 0;
}