#include <iostream>
using namespace std;
// This program asks the user for real and imaginary part of a complex number equation and returns the sum
// It is uses the concept of classes

class complexNumber
{
private:
    int a;
    int b;

public:
    int v1,v2;
    void enterNumber(void){
        cout<<"Please Enter the Real part: "<<endl;
        cin>>v1;
        cout<<"Please Enter the Imaginary part: "<<endl;
        cin>>v2;
        a = v1;
        b =v2;
    }
    void showNumber(void){
        cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
    void sumComplex(complexNumber a1 , complexNumber a2){
        
        a = a1.a + a2.a ;
        b = a1.b + a2.b;
        
    }
    void showSum(void){
        cout<<"The sum of bothof the complex number equation is " <<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complexNumber c1,c2 ,c3;
    c1.enterNumber();
    c1.showNumber();
    c2.enterNumber();
    c2.showNumber();
    c3.sumComplex(c1,c2);
    c3.showSum();


   

    return 0;
}