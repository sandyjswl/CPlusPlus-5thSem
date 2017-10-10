#include<iostream>

using namespace std;

int interest(int p, int r, int t)
{
	return((p*r*t)/100);
}


int main(){

	int p,r,t;
	int si;
	cout<<"Enter the values of P, R, T ";
	cin>>p>>r>>t;
	si=interest(p,r,t);
	cout<<"The Simple Interest is  "<<si;
}


