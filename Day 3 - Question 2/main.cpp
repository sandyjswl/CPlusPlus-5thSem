#include<iostream>
using namespace std;


int Pair(char *str,char *key)
{
    int c=0;
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]==key[0] && str[i+1]==key[1])
        {
            c=c+1;
            i=i+2;
            continue;
        }
        i=i+1;
    }



    return c;

}


int main()
{
    char str[100],key[3];
    cout<<"Enter String "<<endl;
    cin.getline(str,100);
    cout<<"Enter the Key; "<<endl;
    cin>>key;
    cout<<"Key occurs in the string "<<endl<<Pair(str,key);

}
