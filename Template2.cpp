#include<iostream>

using namespace std;
// swap function is predefined in cpp, when we call the function swap, it overrides the swap function


template<class Type>
//template<typename Type> -->> Similar to the above line 
//Using Template function where the data type is Type, we can use any name instead of type
// This converts the swap2 function into a generic function. Which we can override as per convenience.
//Compile Time polymorphism.
void swap2(Type &x,Type &y)
{
	Type temp=x;
	x=y;
	y=temp;
}
template<class T>
void show(T x, T y)
{
	cout<<"A= "<<x<<"  B= "<<y<<endl;

}
template<class T, class Y>
void show(T x, Y y)
{

	cout<<"A= "<<x<<"  B= "<<y<<endl;
}

// If there is a method defined explicitly, then that function will be called instead of the generic function.


int main()
{

	int a=10,b=20;
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<a<<"  B= "<<b<<endl;
	swap2(a,b);
	cout<<"After Swapping..."<<endl;
	//cout<<"A= "<<a<<"  B= "<<b<<endl;
	show(a,b);
	
	cout<<"\nUsing Float"<<endl;	

	float af=10.55f,bf=20.75f;
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<af<<"  B= "<<bf<<endl;
	swap2(af,bf);
	cout<<"After Swapping..."<<endl;
	//cout<<"A= "<<af<<"  B= "<<bf<<endl;
	show(af,bf);

	cout<<"\nUsing Character"<<endl;	

	char ac='X',bc='Y';
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<ac<<"  B= "<<bc<<endl;
	swap2(ac,bc);
	cout<<"After Swapping..."<<endl;
	//cout<<"A= "<<ac<<"  B= "<<bc<<endl;	
	show(ac,bc);

	show(a,bf);
	show(af,b);

}
