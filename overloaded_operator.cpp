#include<iostream>

using namespace std;

class A
{
	int val;
	public:
		A();
		A(int);
		void show();
		A operator+(A);
		A operator+(int);
		friend A operator +(int, A&);
		
		A operator-(A);
		A operator ++();
		A operator ++(int);
		friend A operator --(A &);

};

A operator+(int x,A&t)
{
	A r;
	r.val=x+t.val;
	return r;

}


A operator --(A &t)
{
	t.val--;
	return t;
}



A:: A(){
	val=0;
	}
A:: A(int v){
		val=v;
	}
void A:: show(){
	cout<<"VALUE =  "<<val<<endl;
	}
A A:: operator+(A temp){
	val=val+temp.val;
	return *this;
}

A A:: operator+(int x){
	val=val+x;
	return *this;
}





A A:: operator-(A temp){
	val=val-temp.val;
	return *this;
}

A A:: operator++()
{
	val++;
	return *this;
}
A A:: operator++(int x)
{
	val++;
	return *this;
}


int main()
{
	A ob1(10),ob2(20),ob3,ob4;
	ob1.show();
	//ob2.show();
	//ob3=ob1+ob2-ob1;
	// binary operator
	//ob3.show();
	//ob4=ob3-ob2;
	//ob4.show();
	// --ob1;
	
	//unary operator
//	ob1.show();	
//	ob1++;

//	ob3=ob1+60;


//	ob3=70+ob1;

	ob3.show();

//operator function can contain  maximu two arguments

}

