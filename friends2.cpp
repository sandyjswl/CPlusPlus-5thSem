#include<iostream>


using namespace std;

class B; //forward declaration of a class


class A
{
	
	int val;


	public:
		A(int);
		A();
		
	friend void show(A,B);

};	



class B
{
	
	int value;


	public:
		B(int);
		B();
		
	friend void show(A,B);

};	



B::B()
{
	value=0;
}


B::B(int value)
	{
		this->value = value;
	}





A::A()
{
	val=0;
}


A::A(int val)
	{
		this->val = val;
	}

void show(A oa, B ob)
	{
		cout<<"Val: "<<oa.val<<endl;

		cout<<"Value: "<<ob.value<<endl;

	}


int main()
{
	

	A ob(10);
	B oc(20);   // copy constructor
	
	
	show(ob,oc);	
	



}
