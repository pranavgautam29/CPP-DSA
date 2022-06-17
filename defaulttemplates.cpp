#include<iostream>
using namespace std;

template <class T1 = int , class T2 = float>
class John{
    public:
        T1 a;
        T2 b;
        John(T1 x , T2 y){
            a= x;
            b = y;
        }
        void display(void){
            cout<<"Value of a is"<<a<<endl;
            cout<<"Value of b is"<<b<<endl;
        }
};
int main()
{
    John<> a(9,2.3);
    // a.display();
    John <float , char> b(9.22 , 'w');
    b.display();
    
    return 0;
}