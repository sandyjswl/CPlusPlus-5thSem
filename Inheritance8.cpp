#include<iostream>

using namespace std;
class A{
	int a;
	
	public:
	static int st; // static variable declaration
		void setA(int x)
		{
			a=x;
		}
		virtual void show()=0; // pure virtual function similar to abstract methiod in Java this class Abstract class beacsue it has a pure virtual function
		
};

int A :: st=10; // Static variable declaration 

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

void fun(A &op) // or fun(A *op)
{
	op.show(); // or op->show()

}





int main()
{
	const int fin=200; // Final variable which cannot be changed later on
	A ob1, *ap;
	B ob2;
	C ob3;
	ob1.setA(100);
	ob2.setB(200);
	ob3.setC(300);
	fun(ob2); //or fun(&ob2)
	fun(ob3); //or fun(&ob3)
	// to use static variable "A:: st" 
}

 


		
