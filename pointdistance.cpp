#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;

public:
friend float distance(point , point);
    int a, b;
    void pointIn()
    {
        cout << "Please Enter coordinate 1: " ;
        cin >> a;
        cout<<endl;
        cout << "Please Enter coordinate 2: " ;
        cin>>b;
        cout<<endl;
        x = a;
        y = b;
    }
    void displayPoint(void){
        cout<<"The Point is "<<"("<<a<<","<<b<<")"<<endl;
    }
} ;
float distance(point o1 , point o2){
    int d1 = o2.x - o1.x;
    int d2 = o2.y - o1.y;
    int s ;
    s = sqrt((d1*d1) + (d2*d2));
    return s;


}
int main()
{
    point p1;
    p1.pointIn();
    p1.displayPoint();
    point p2;
    p2.pointIn();
    p2.displayPoint();
    cout<<endl;
    cout<<"The distance between these two points are "<<distance(p1,p2)<<endl;

    return 0;
}