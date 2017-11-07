#include <iostream>

using namespace std;

template <typename T>

class Circle{
    T radius,result;
public:
    Circle(T);
    void area();
    void show();
};
template <typename T>
Circle<T> ::Circle(T radius){
    this->radius=radius;
}

template <typename T>
void Circle<T> ::area() {
    result=3.14*radius*radius;
}
template <typename T>
void Circle<T>::show() {
    cout<<"The Area is "<<result<<endl;
}

int main()
{
    Circle<int> ob1(10);
    Circle<float> ob2(10.55f);
    Circle<double> ob3(10.22345);
    ob1.area();
    ob1.show();
    ob2.area();
    ob2.show();
    ob3.area();
    ob3.show();
}