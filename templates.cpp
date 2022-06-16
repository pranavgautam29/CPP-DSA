#include<iostream>
using namespace std;
template<class T>
class vector{
    public:
    T * arr;
    int size;
    
        vector(int m){
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &a){
        int d = 0;
        for (int  i = 0; i < size; i++)
        {
            d+= this->arr[i] * a.arr[i];
           
        }
         return d;
    }
};
int main()
{
    vector <float>vec(3);
    vec.arr[0]= 12.2;
    vec.arr[1]= 13.11;
    vec.arr[2]= 11.42;
    vector <float>vec1(3);
    vec1.arr[0]= 2.76;
    vec1.arr[1]= 3.44;
    vec1.arr[2]= 1.90;
    float a = vec.dotProduct(vec1);
    cout<<a<<endl;

    
    return 0;
}