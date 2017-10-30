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

class B : public A // class B inheits A
{
	int b;
	public:
		void setB(int x)
		{
			b=x;
			p=x+50;
		}
		void showB()
		{
			cout<<"B =  "<<b<<"  p=  "<<p<<endl;
		}
};

int main()
{
	B ob;
	ob.setA(100);
	ob.setB(200);
	ob.showA();
	ob.showB();
}


	
