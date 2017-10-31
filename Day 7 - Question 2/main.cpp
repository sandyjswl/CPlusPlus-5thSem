/* WAP with a class called Dimensions, which contains a pure virtual functions area().
 Create three subclasses Rectangle, Triangle, Circle. Include appropriate methods, constructors, destructors for both the sub classes
 that calculate and display the area of Rectangle, triangle and circle.

 Make an array of pointers to dimensions objects and call area() through the base class pointers, to verify the behaviour of the virtual functions.
*/
#include <iostream>

using namespace std;

class Dimensions{
public:

    virtual void area()=0;
    virtual void display()
    {
      //  cout<<"THE AREA IS  "<<result<<endl;
    }

};

class Rectangle : public Dimensions{
    double length, breadth,result;
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
    virtual void display()
    {
        cout<<"The area of RECTANGLE is  "<<result<<endl;
    }

};

class Triangle : public Dimensions{
    double base,height,result;
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
    virtual void display()
    {
        cout<<"The area of TRIANGLE is  "<<result<<endl;
    }

};

class Circle :public  Dimensions{
    double radius,result;
public:
    Circle(int r)
    {
        radius=r;
    }
    void area()
    {
        result=3.14*radius*radius;
    }
    virtual void display()
    {
        cout<<"The Area of Circle is  "<<result<<endl;
    }

};
int main() {
        Dimensions *array[3];
        int length,breadth,base,height,radius;

        cout<<"Select the Length and Breadth of Rectangle"<<endl;
        cin>>length;
        cin>>breadth;
        Rectangle obj1(length,breadth);
        array[0]=&obj1;
        cout<<"Select the Base and Height of Triangle"<<endl;
        cin>>base;
        cin>>height;
        Triangle obj2(base,height);
        array[1]=&obj2;
        cout<<"Select the Radius of Circle"<<endl;
        cin>>radius;
        Circle obj3(radius);
        array[2]=&obj3;
    obj1.area();
    obj1.display();

    obj2.area();
    obj2.display();

    obj3.area();
    obj3.display();


    cout<<"The Output using Array of Pointers is: "<<endl;
    for(int i=0;i<3;i++){
        array[i]->display();
    }







}