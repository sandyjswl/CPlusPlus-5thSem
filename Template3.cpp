#include<iostream>

using namespace std;

template <typename T>
//every method inside a template class will use template function
class Temp{
	T x,y;
	public:
		Temp(T,T);	
		void swap2();
		void show();
};
template<typename T>
Temp<T> :: Temp(T a, T b)
{
	x=a;
	y=b;
}

template<typename X>
void Temp<X> :: swap2()
{
	X t=x;	
	x=y;
	y=t;
}
template<typename Y>
void Temp<Y> :: show()
{
	cout<<" 1st = "<<x<<"  2nd = "<<y<<endl;
}

int main()
{
	char ac='A',bc='X';
	int a=10,b=20;
	float af=10.55f,bf=20.75f;

	Temp<char> ob1(ac,bc);
	Temp<int> ob2(a,b);
	Temp<float> ob3(af,bf);	

	ob1.show();
	ob1.swap2();
	ob1.show();
	
}
