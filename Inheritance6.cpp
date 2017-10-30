#include<iostream>

using namespace std;
class A{
	int a;
	
	public:
		A(int x)
		{
			a=x;
		}
		void showA()
		{
			cout<<"a =  "<<a<<endl;
			
		}
};

class B : virtual public A
{
	int b;
	public:
		B(int w, int x) : A(w)
		{
			b=x;
		
		}
		void showB()
		{
			cout<<"B =  "<<b<<endl;
		}
};
// Here we make the class B and C virtual to remove the ambiguity, so that class D can directly inherit from class A without any ambiguity
class C : public virtual A 
{
	int c;
	public:
		C(int w, int y) : A(w) 
		// Here we call the constuctor of A from C becuase A is the superclass of C.		
		{
			c=y;
			
		}
		void showC()
		{
			cout<<"C =  "<<c<<endl;
		}
};

class D : public B, public C // class B inheits A
{
	int d;
	public:
		D(int w, int x, int y, int z) : B(w,x), C(w,y),A(w)
		// Here, we've used the :B(w,x),C(w,y),A(w) to call the constructor of the superclass, this is similar to the super keyword in Java. We call the constructors of B,C,A from D .		

		{
			d=z;
		
		}
		void showD()
		{
			cout<<"D =  "<<d<<endl;
		}
};



int main()
{
	D ob(100,200,300,400);
	
	ob.showA();
	ob.showB();
	ob.showC();
	ob.showD();
}

//When we use virtual class we can remove the scope resolution 


		
