#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;
    ofstream name1("sample2.txt");
    name1<<name;
    name1.close();

    ifstream in("sample2.txt");
    string content;
    getline(in,content);
    cout<<content;
    in.close();

    
    return 0;
}