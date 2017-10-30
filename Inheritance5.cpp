#include<iostream>

using namespace std;
class A{
	int a;
	protected:
			int p;
	public:
		void setA(int x)
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
		void setB(int x)
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
		void setC(int x)
		{
			c=x;
			
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
		void setD(int x)
		{
			d=x;
			//p=x+50;
		}
		void showD()
		{
			cout<<"D =  "<<d<<endl;
		}
};



int main()
{
	D ob;
	ob.setA(100);
	ob.setB(200);
	ob.setC(300);
	ob.setD(400);	
	ob.showA();
	ob.showB();
	ob.showC();
	ob.showD();
}

//When we use virtual class we can remove the scope resolution 


		
