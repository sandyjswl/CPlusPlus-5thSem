#include <iostream>
using namespace std;

class SimpleCircle{
    double radius;
public:
    SimpleCircle(){
        radius=0;
    }
    SimpleCircle(double radius){
        this->radius=radius;
    }
    SimpleCircle operator++();
    SimpleCircle operator++(int);
    SimpleCircle operator--();
    SimpleCircle operator--(int );
    SimpleCircle operator=(SimpleCircle &);
    void show();


};



SimpleCircle SimpleCircle ::operator++() {
    radius++;
    return *this;
}
SimpleCircle SimpleCircle ::operator++(int t) {
    radius++;
    return *this;
}

SimpleCircle SimpleCircle ::operator--() {
    radius--;
    return *this;
}
SimpleCircle SimpleCircle ::operator--(int t) {
    radius--;
    return *this;
}
SimpleCircle SimpleCircle ::operator=(SimpleCircle &s) {
    //SimpleCircle temp;
    this->radius=s.radius;
    return *this;

}

void SimpleCircle::show() {
    cout<<" Value : "<<radius<<endl;
}

int main() {
    SimpleCircle a;
    SimpleCircle b(9.0),c;
    cout<<"Object A Default ";
    a.show();
    cout<<"Object B Default ";
    b.show();
    cout<<endl;
    a++;
    cout<<"Object A after Incrementing ";
    a.show();
    b--;
    cout<<"Object B after Decrementing ";
    b.show();
    cout<<endl;
    cout<<"After overloading B on A ";

    a=b;
    a.show();

}
