#include<iostream>

using namespace std;
class A{
	int a;
	
	public:
		void setA(int x)
		{
			a=x;
		}
		virtual void show()=0; 
		{
			cout<<"a =  "<<a<<endl;
			
		}
};

class B : public A
{
	int b;
	public:
		void setB( int bb) 
		{
			b=bb;
		
		}
		void show()
		{
			cout<<"B =  "<<b<<endl;
		}
};
// Here we make the class B and C virtual to remove the ambiguity, so that class D can directly inherit from class A without any ambiguity
class C : public B 
{
	int c;
	public:
		void setC( int cc)  
		// Here we call the constuctor of A from C becuase A is the superclass of C.		
		{
			c=cc;
			
		}
		void show()
		{
			cout<<"C =  "<<c<<endl;
		}
};





int main()
{

	A ob1, *ap;
	B ob2;
	C ob3;
	ob1.setA(100);
	ob2.setB(200);
	ob3.setC(300);
	ap=&ob1;
	// We're using runtime polymorphism or dynamic binding
	ap->show();

	ap=&ob2;
	ap->show();
	ap=&ob3;	
	ap->show();
	
}

//When we use virtual class we can remove the scope resolution 


		
