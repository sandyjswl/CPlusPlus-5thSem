#include<iostream>
#include<vector>

using namespace std;
void show(vector<int>  :: iterator p,vector<int> ob)
{
	for(;p!=ob.end();p++)
		cout<<*p<<endl;

}


int main()
{
	vector<int> ob(5);

	for(int i=0;i<ob.size();i++)
		ob[i]=i+10;
	ob.push_back(60);


	
	vector<int>  :: iterator p = ob.begin();	
	
	ob.insert(p+3,600);
	
	show(ob.begin(),ob);
	
	
	ob.erase(ob.begin()+3,ob.begin()+4);
	ob.erase(ob.begin(),ob.end());
	cout<<"THE SIZE IS "<<ob.size();

	
	

}
