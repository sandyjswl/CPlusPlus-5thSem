#include<iostream>


using namespace std;

class B; //forward declaration of a class


class A
{
	
	int val;


	public:
		A(int);
		A();
		
		void show(B);

};	



class B
{
	
	int value;


	public:
		B(int);
		B();
		
	friend void A::  show(B);  // A is giving permision to B to use its memeber

};	



B::B()
{
	value=0;
}


B :: B(int value)
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

void A::show(B ob)
	{
		cout<<"Val: "<<val<<endl;

		cout<<"Value: "<<ob.value<<endl;

	}


int main()
{
	

	A ob(10);
	B oc(20);   // copy constructor
	
	
	ob.show(oc);	
	



}
