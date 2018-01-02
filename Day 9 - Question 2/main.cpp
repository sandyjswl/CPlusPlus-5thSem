#include <iostream>

using namespace std;

class MyException{
    string msg;
    int n;
public:
    MyException(int n,string m)
    {
        msg=m;
        this->n=n;

    }
    string getMsg()
    {
        cout<<n<<msg<<endl;
    }

};

int main() {
    int a;
    cout<<"Enter a Number"<<endl;
    cin>>a;

    bool prime=true;

    try{
        if(a==0){
            throw 1;
        }
        for(int i=2;i<a;i++){
            if(a%i==0){
                prime=false;

            }
        }
        if(prime){
            throw new MyException(a," is a prime Number");

        }

    }
    catch(MyException *x)
    {
        x->getMsg();
        exit(0);
    }

    catch(int x) {
        cout<<"The Number is 0";
        exit(0);
    }
    cout<<"The Number is  "<<a<<endl;
}
