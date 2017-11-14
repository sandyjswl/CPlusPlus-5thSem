#include<iostream>

using namespace std;
struct cal
{
 	char mont[12];
	int days;
};

int usingArray()
{
   	char month[][10]={"Jan","Feb","March","April","may","June","July","Aug","sept","oct","nov","dec"};
	int days[]={31,28,30,31,30,31,30,31,30,31,30,31};

	cout<<"USING ARRAY"<<endl;

	for(int i=0;i<12;i++)
	{
		cout<<month[i]<<" ";

		cout<<days[i];
		cout<<endl;
	}

}
 int usingStruct()
{
	struct cal *add;
	struct cal s1[]={{"Jan",31},{"Feb",28},{"March",30},{"April",31},{"May",30},{"june",31},{"July",30},{"Aug",31},{"sept",30},{"oct",31},{"nov",30},{"dec",31}};

	add=s1;

	cout<<"USING STRUCTURES"<<endl;
	for(int i=0;i<12;i++,add++)
	{
		cout<<(add->mont)<<" ";

		cout<<(add->days);
		cout<<endl;
	}

}

int main()
{

	usingArray();
	usingStruct();

}


