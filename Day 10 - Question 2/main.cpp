#include <iostream>
#include<vector>
using namespace std;
struct Pair{
	string ch;
	int cnt;
};

vector <Pair> p;
void count(string ch)
{
	int i=0;
	for(i=0;i<p.size();i++)
	{
		if(p[i].ch==ch)
		{
			p[i].cnt++;
			break;
		}
		
	}
	if(i==p.size())
	{
		p.push_back({ch,1});
	}

}

int main() {
	 string ch;	
	 cout<<"Enter a String";
	while(cin>>ch)
	{
		count(ch);
	}
	cout<<"The Output:"
	for(int i=0;i<p.size();i++)
		cout<<p[i].ch<<" "<<p[i].cnt<<endl;
}
