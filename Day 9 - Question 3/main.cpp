#include <iostream>

using namespace std;

class MyException{
    string msg;
public:
    MyException(string m)
    {
        msg = m;
    }
    string getMsg()
    {
        return msg;
    }

};

int main(int argc, char **argv) {
    int c=0;
   try{
       if(argc<3){
           throw new MyException("Very few Arguments");

       }
       if(argc>3){
           throw new MyException("Too many Arguments");
       }
       int a=atoi(argv[1]);
       int b=atoi(argv[2]);

       c=a+b;
       if(b==0){
           throw 1;
       }

       if(a==b){
           throw "Caught Exception";
       }
   }

    catch (MyException *e){
        cout<<e->getMsg()<<endl;
        exit(0);
    }
    catch (int i){
        cout<<"Second input cannot be Zero "<<endl;
        exit(0);
    }
    catch (...){
        cout<<"Both Numbers are Equal"<<endl;

    }

    cout<<"Sum is "<<c<<endl;
}
