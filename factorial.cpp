#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n==1)
		return 1;
	else
		//cout<<"The factorial of "<<n<<"is " <<endl;
		return n*factorial(n-1);
		
}


int main(){

	int n;
	int result;
	cout<<"Enter the Number  ";
	cin>>n;
	result=factorial(n);
	cout<<"The Factorial of "<<n<<"is  "<<result<<endl;
}


