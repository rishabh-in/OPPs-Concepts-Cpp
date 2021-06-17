#include<iostream>
using namespace std;
class Shape {

    protected:
    int width, height;

    public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }
    virtual void area() {
        cout<<"Shape area is :"<<endl;
    }
};
class Rectangle: public Shape {
    public:
    Rectangle(int a = 0, int b = 0) : Shape(a,b) {}
    void area() {
        cout<<"Area of rectangle is: "<<(width*height)<<endl;
    }

};
class Triangle: public Shape {
    public:
    Triangle(int a = 0, int b = 0) : Shape(a,b) {}
    void area() {
        cout<<"Area of triangle is: "<<(width*height)/2<<endl;
    }

};

int main() {
    Shape *ptr;
    Rectangle rec(4,5);
    Triangle tri(5,6);

    ptr = &rec;
    ptr->area();        // This is run time polymorphism with the help of virtual function.
                        // Here area() is virtual function.
    ptr = &tri;
    ptr->area();

    return 0;
}