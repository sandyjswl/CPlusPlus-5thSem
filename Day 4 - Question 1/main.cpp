#include<iostream>
using namespace std;

class Clock
{
    int hh,mm;
public:
    Clock();
    Clock(int,int);
    void show();
    Clock sum(Clock);
    ~Clock();
};

Clock:: ~Clock()
{
}

Clock::	Clock()
{
    hh=mm=0;
}


Clock::	Clock(int h, int m)
{
    hh=h;mm=m;
}

void  Clock:: show()
{
    cout<<hh<<":"<<mm;
}

Clock Clock:: sum(Clock t2)
{

    Clock c3;
    c3.hh=hh+t2.hh;
    c3.mm=mm+t2.mm;
    return c3;

}

int main()
{
    Clock c1(5,10),c2(6,20),c3;
    c1.show();
    cout<<" + ";
    c2.show();
    cout<<" = ";
    c3=c1.sum(c2);
    c3.show();
    cout<<endl;
}
