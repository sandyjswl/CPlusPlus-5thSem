#include<iostream>

using namespace std;
// swap function is predefined in cpp, when we call the function swap, it overrides the swap function

void swap2(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

void swap2(float &x,float &y)
{
	float temp=x;
	x=y;
	y=temp;
}


void swap2(char &x,char &y)
{
	char temp=x;
	x=y;
	y=temp;
}



int main()
{
	int a=10,b=20;
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<a<<"  B= "<<b<<endl;
	swap2(a,b);
	cout<<"After Swapping..."<<endl;
	cout<<"A= "<<a<<"  B= "<<b<<endl;
	
	cout<<"\nUsing Float"<<endl;	

	float af=10.55f,bf=20.75f;
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<af<<"  B= "<<bf<<endl;
	swap2(af,bf);
	cout<<"After Swapping..."<<endl;
	cout<<"A= "<<af<<"  B= "<<bf<<endl;

	cout<<"\nUsing Character"<<endl;	

	char ac='X',bc='Y';
	cout<<"Before Swapping..."<<endl;
	cout<<"A= "<<ac<<"  B= "<<bc<<endl;
	swap2(ac,bc);
	cout<<"After Swapping..."<<endl;
	cout<<"A= "<<ac<<"  B= "<<bc<<endl;
	
	


}
