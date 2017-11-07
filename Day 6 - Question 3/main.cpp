#include <iostream>

using namespace std;

class Sample{
    int val;
public:
    Sample();
    Sample(int v);
    Sample operator+(int);
    friend Sample operator +(int, Sample&);
    void show();

};

Sample operator+(int x,Sample &t)
{
    Sample r;
    r.val=x+t.val;
    return r;

}

Sample::Sample(){
    val=0;
}

Sample::Sample(int v) {
    val=v;
}
void Sample::show() {
    cout<<"The Value is "<<val<<endl;
}
Sample  Sample::operator+(int x) {
    val=val+x;
    return *this;

}

int main()
{
    Sample s1(10),s2(30);
    s1.show();
    s2.show();
    s2=s1+10;
    s2.show();
    s2=10+s1;
    s2.show();



}
