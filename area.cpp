#include<iostream>
using namespace std;

float* area(float* );


int main()
{
	float *a,r;
	
	cout<<"Enter the radius:";
	cin>>r;
	a=area(&r);
	cout<<"The area is "<<*a;
}

float* area(float* r)
{
	float a;
	a=(3.14*(*r)*(*r));
	return(&a);
}
