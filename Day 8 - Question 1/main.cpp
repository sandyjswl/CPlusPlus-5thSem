#include<iostream>

using namespace std;

template<typename T>
void bubbleSort(T a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				T temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}

		}

	}

}
template <class T>
void display(T a[], int size)
{
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";


}

int main()
{
	int a[]={9,2,7,15,21,35};
	double ad[]={9.012,2.021,7.022,15.022,21.011,35.0212};
	float af[]={9.25f,2.78f,7.89f,15.23f,21.21f,35.35f};
	int size=6;

	cout<<"Before Sorting Integer Array: "<<endl;
	display(a,size);
	bubbleSort(a,size);
	cout<<"\nAfter Sorting Integer Array"<<endl;
	display(a,size);

	cout<<"\nBefore Sorting Float Array"<<endl;
	display(af,size);
	bubbleSort(af,size);
	cout<<"\nAfter Sorting Float Array"<<endl;
	display(af,size);

	cout<<"\nBefore Sorting Double Array"<<endl;
	display(ad,size);
	bubbleSort(ad,size);
	cout<<"\nAfter Sorting Double Array"<<endl;
	display(ad,size);


}
