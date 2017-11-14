#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int a= atoi(argv[1]);
    int b= atoi(argv[3]);
    char c=argv[2][0];
    int res=0;
    switch(c)
    {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            res=a/b;
            break;

    }
    cout<<"The result is "<<res<<endl;

}
