#include<iostream>



using namespace std;

class A
{
	
	int val;


	public:
		A(int);
		A();
		void show();
};	

A::A()
{
	val=0;
}


A::A(int v)
	{
		val = v;
	}

void  A:: show()
	{
		cout<<"Val: "<<val<<endl;
	}

void swap(int &a ,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}


int main()
{
	int a=100,b=200;
//	int *p=&a;      //
	A ob;
	A &obref=ob;          // Storing the reference opf the object ob in obref
	cout<<"a="<<a<<" b= "<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<" b= "<<b<<endl;
}
