#include<iostream>

using namespace std;
// The defalut inheritance is Private in C++, if we use public then the protected members will be inherted protected and the public members will be inherited publicly. 

// if we inherit using the protected keyword, the the ptotected members will be inheited protected and the public members will also be inherited protected

//Only the public members will change as per the type of inheritance used, the protected members will always be inheited protected
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

class B : public A
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

class C : public A // class B inheits A
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
	ob.B::setA(100);
	ob.setB(200);
	ob.setC(300);
	ob.setD(400);	
	ob.B::showA();
	ob.showB();
	ob.showC();
	ob.showD();
}

// We use ob.B:: setA to tell the compiler to use the members from the set B since the class D will be inheritig from both class B and C , so the compiler doesn't know which memer to use hence the ambiguity.

// TO solve this ambiguity we use the scope by telling the compiler to use the members from class B and not C, we can use either one of the two


//If we set the variable using B and show using C we will get a garbage value.


	
