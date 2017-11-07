#include<iostream>

using namespace std;

class A
{
    int val;
public:
    A();
    A(int);
    void show();
    A operator+(A);
  //  A operator+(int);
  //  friend A operator +(int, A&);

    A operator-(A);
  //  A operator ++();
  //  A operator ++(int);
 //   friend A operator --(A &);

};

/*A operator+(int x,A &t)
{
    A r;
    r.val=x+t.val;
    return r;

}*/

/*
A operator --(A &t)
{
t.val--;
return t;
}*/



A:: A(){
    val=0;
}
A:: A(int v){
    val=v;
}
void A:: show(){
    cout<<" "<<val<<endl;
}
A A:: operator+(A temp){
    val=val+temp.val;
    return *this;
}

/*
A A:: operator+(int x){
    val=val+x;
    return *this;
}

*/




A A:: operator-(A temp){
    val=val-temp.val;
    return *this;
}

/*A A:: operator++()
{
    val++;
    return *this;
}
A A:: operator++(int x)
{
    val++;
    return *this;
}*/


int main()
{
    A a(50),b(20),c(10),d;
    cout<<"Value of A is:";
    a.show();
    cout<<"Value of B is:";
    b.show();
    cout<<"Value of C is:";
    c.show();
    cout<<"Result is :";
    d=a+b-c;
    d.show();


}