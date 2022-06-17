#include<iostream>
using namespace std;
template <class T1 , class T2>
float funcaverage(T1 x,T2 y){
    float a = (x + y)/2;
    return a;
}

template <class T>
void swapp(T &x, T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 5;
    int n = 34;
    swapp(x,n);
    cout<<x<<endl;
    cout<<n<<endl;
    

    
    return 0;
}