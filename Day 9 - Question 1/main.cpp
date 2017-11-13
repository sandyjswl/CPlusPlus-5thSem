
/*
Write a simple program which receives two numbers divides the first by second.
Use exception handling to manage a divide by zero.
*/
#include<iostream>
#include<cstdlib>

using namespace std;


int main(int argc, char **argv)
{
    int c;
   try
   {
       if (argc<3){
           throw 1;
       }
    
       int a=atoi(argv[1]);
       int b=atoi(argv[2]);

       if(b==0){
            throw "Divide By Zero Exception";
       }
       c=a/b;

   }

   catch(const int x) {
        cout<<"\nNot Enough Arguments"<<endl;
        exit(0);
    }
    catch(const char *x) {
        cout<<"\nDivide By Zero Exception"<<endl;
        exit(0);
    }
    cout<<"The Result is  "<<c<<endl;

}
