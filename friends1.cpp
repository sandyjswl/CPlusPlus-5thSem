#include<iostream>
//#define MAX(a,b) a>b?a:b


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




int main()
{
	int a=100,b=200;
//	int *p=&a;      //
	A ob(10);
	ob.show(0)
	A &obref=ob;          // Storing the reference opf the object ob in obref
	obref.show()		// dot(.) operator is used while using reference
	A *op=&ob;
	op->show();           // -> operator is used while using pointers


	struct node *nd=(struct node *) malloc(sizeof(struct node));
	int *oop= (int *)malloc(sizeof(int));
	int *q=new int;
	//new keyword returns an address
	
	//the first two lines are similar to the third line whre the new keyword is used to allocate space and then return thr address
	
	//malloc retrurn a VOID POIBNTER of the starting address

	A *op=new A(10);
	op->show();

		
	



}
