#include <iostream>
#include <list>

using namespace std;


void show(list<int> v){
    list<int>  :: iterator p = v.begin();
    for(;p!=v.end();p++)
    {
        cout<<*p<<endl;
    }
}
int main() {
    int a,num,pos,temp;
    list<int> list1,list2;
    cout<<"Enter 5 Numbers in List 1: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>temp;
        list1.push_back(temp);
    }
    cout<<"The list 1 is"<<endl;
    show(list1);
    cout<<"Enter 5 Numbers in List 2: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>temp;
        list2.push_back(temp);
    }
    cout<<"The list 2 is"<<endl;
    show(list2);
    list1.sort();
    list2.sort();
    cout<<"After Sorting"<<endl;
    cout<<"The list 1 is"<<endl;
    show(list1);
    cout<<"The list 2 is"<<endl;
    show(list2);
   list1.merge(list2);
    cout<<"After Merging"<<endl;
    show(list1);
}