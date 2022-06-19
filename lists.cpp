#include<iostream>
#include<list>
using namespace std;

void display(list <int> &l){
    list<int> :: iterator iter;
    for (iter = l.begin();iter != l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}
int main()
{
    list <int> list1; // list declaration syntax of 0 length list
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(16);
    // cout<<"List 1 before merging "<<endl;
    display(list1);

    int element;
    list  <int> list2(4); // empty list of length 4
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter "<<i<<" element of list : ";
        cin>>element;
        list2.push_back(element);

    // }
    
    list <int> :: iterator it;
    it = list2.begin();
    *it = 4;
    it++;
    *it = 9;
    it++;
    *it = 2;
    it++;
    *it = 90;
    //Removing elements from the list
    list2.pop_back(); // deletes the last element
    list2.pop_front(); // deletes the front element
    list2.remove(2); // removes the element present in the parenthesis
    
   // Sorting the List
    list2.sort();

   // Merging the List
    cout<<"List 1 after merging "<<endl;
    list1.sort();
    list2.sort();
    list1.merge(list2);

   // Reversing a list 
    list2.reverse();
    display(list2);

    
    
    return 0;
}