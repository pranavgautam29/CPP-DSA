#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec;
    int size, element;
    cout << "Enter the Size of Vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element of the vector : ";
        cin >> element;
        vec.push_back(element);
    }
    cout << endl;
    cout << "Vector : ";
    display(vec);

    return 0;
}