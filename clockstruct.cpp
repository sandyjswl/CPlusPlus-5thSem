#include<iostream>
#define MAX(a,b) a>b?a:b


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





main()
{
	 Clock c1(5,10),c2(6,20),c3;
	//c1.hh=5,c1.mm=10;
	//c2.hh=6,c2.mm=20;
	
//	c1.setClock(5,10);
//	c2.setClock(6,20);

	c1.show();
	cout<<endl;
	c2.show();
	cout<<endl;
	c3=c1.sum(c2);
	c3.show();
	cout<<endl;
}
