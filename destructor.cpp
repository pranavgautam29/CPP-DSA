#include<iostream>
using namespace std;
int count  = 0;
//Destructor never takes any argument nor does it return any value 
class num{
    public:
        num(){
            count++;
            cout<<"Constructor is called for object number "<<count<<endl;
        }
        ~num(){ // destructor declaration
            cout<<"Destructor called for object "<<count<<endl;
            count--;
        }

};
int main()
{
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects "<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;

    }
    cout<<"Back to Main"<<endl;
    // Destructor destroys the object when the compiler sees no need of it ahead
    
    return 0;
}