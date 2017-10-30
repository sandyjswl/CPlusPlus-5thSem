// WAP with a class called Dimensions, which contains a pure virtual functions area().
// Create three subclasses Rectangle, Triangle, Circle. Include appropriate methods, constructors, destructors for both the sub classes
// that calculate and display the area of Rectangle, triangle and circle.

// Make an array of pointers to dimensions objects and call area() through the base class pointers, to verify the behaviour of the virtual functions.

#include <iostream>

using namespace std;

class Dimensions{
public:
    double result;
    virtual void area()=0;
    virtual void display()
    {
        cout<<"THE AREA IS  "<<result<<endl;
    }

};

class Rectangle : public Dimensions{
    double length, breadth;
public:
   Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        result=length*breadth;
    }

};

class Triangle : public Dimensions{
    double base,height;
public:
    Triangle(int b, int h)
    {
        base=b;
        height=h;
    }
    void area()
    {
        result=0.5*base*height;
    }

};

class Circle :public  Dimensions{
    double radius;
public:
    Circle(int r)
    {
        radius=r;
    }
    void area()
    {
        result=3.14*radius*radius;
    }

};
int main() {
    Rectangle obj1(10,20);
    obj1.area();
    obj1.display();
    Triangle obj2(5,5);
    obj2.area();
    obj2.display();
    Circle obj3(5);
    obj3.area();
    obj3.display();

}