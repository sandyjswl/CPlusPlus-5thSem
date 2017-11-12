#include <iostream>
#include <cmath>

using namespace std;

class Point{
    int x,y;

public:

    Point();
    Point(int ,int);
    double calculate(Point);
    void display();
    void displayResult(double);
};

Point:: Point(){
    x=y=0;
}

Point::Point(int a, int b) {
    x=a;y=b;
}

void Point::display() {
    cout<<"x="<<x<<"  y="<<y;
}

double Point:: calculate(Point temp){
    double distance;
    distance = sqrt((x - temp.x) * (x - temp.x) + (y - temp.y) * (y - temp.y));
    return distance;

}

void Point:: displayResult(double result) {
    cout<<"The Distance between the two points is  "<<result;
}



int main() {
    Point p1(10,15),p2(20,25);
    double result;
    cout<<"First Point:";
    p1.display();
    cout<<endl;
    cout<<"Second Point:";
    p2.display();

    result=p1.calculate(p2);
    cout<<endl;
    p1.displayResult(result);
}