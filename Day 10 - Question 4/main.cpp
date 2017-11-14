#include <iostream>
#include <map>

using namespace std;
struct Student{
    string name;
    int age;

};

int main() {
    int r,a;
    string n;
    map<int,Student> student;
    cout<<"Enter the Roll Number, Name and Age of 3 Students"<<endl;
    for(int i=0;i<3;i++){
        cin>>r>>n>>a;
        student.insert(pair<int,Student>(r,{n,a}));
    }
    map<int,Student>  :: iterator itr = student.begin();
    while(itr!=student.end())
    {
        cout<<"Roll= "<<itr->first<<" Name= "<<itr->second.name<<" Age= "<<itr->second.age<<endl;
        itr++;
    }

    cout<<"Enter the Roll Number to Find:"<<endl;
    int ro; cin>>ro;
    itr=student.begin();
    while(itr!=student.end())
    {
        if(itr->first==ro){
            cout<<"Record Found"<<endl;
            cout<<"Roll= "<<itr->first<<" Name= "<<itr->second.name<<" Age= "<<itr->second.age<<endl;
        }
        itr++;
    }

}