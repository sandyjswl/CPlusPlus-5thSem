#include <iostream>
#include <vector>

using namespace std;


void show(vector<int> v){
    vector<int>  :: iterator p = v.begin();
    for(;p!=v.end();p++)
    {
        cout<<*p<<endl;
    }
}
int main() {
    int a,num,pos,temp;
    vector<int> vector1(5);
    cout<<"Enter 5 Numbers: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>vector1[i];
    }
    cout<<"The Vector is"<<endl;
    show(vector1);
    cout<<"Enter a number to PUSH BACK"<<endl;
    cin>>a;
    vector1.push_back(a);
    cout<<"The Vector is"<<endl;
    show(vector1);
    cout<<"Enter a Number and Position"<<endl;
    cin>>num>>pos;
    vector1.insert(vector1.begin()+pos,num);
    cout<<"The Vector is"<<endl;
    show(vector1);
}