#include<iostream>

using namespace std;
char fac(char);
int factn(int);
int main()
{
	char n='a';
	int p=0;
	fac(n);
	factn(p);
}




char fac(char n)
{
	char z;
	
	if (n=='z') 
		return (int('z'));
	else
		if(int(n)>=97 && int(n)<=123)
		{
			cout<<"Ascii of "<< n <<" is "<<int(n)<<endl;
			return fac(n+1);
		}		
		
}

int factn(int n)
{
	if(n==10)
		return 0;
	else
		
		cout<<"Ascii of "<< n <<" is "<<(n+'9')<<endl;
		return factn(n+1);
}
