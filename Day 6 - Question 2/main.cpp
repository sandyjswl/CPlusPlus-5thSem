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
    cout<<"THE VALUE OF RADIUS::"<<radius<<endl;
}

int main() {
    SimpleCircle a(0);
    SimpleCircle b(9.0),c;
    cout<<"Default VALUE:"<<endl;
    a.show();
    b.show();
    cout<<"After Incrementing A:"<<endl;
    a++;
    a.show();
    cout<<"After Decrementing B:"<<endl;
    b--;
    b.show();
    cout<<"After Using Overloaded = operator:"<<endl;
    b=a;
    b.show();



}
