#include<iostream>
using namespace std;
class Person {
    public:
    Person() {
        cout<<"Person is called \n";
    }
    Person(int a, int b) {
        cout<<a<<", "<< b<<endl;
    }
};
class Faculty: virtual public Person {          // Virtual base class
    public:
    Faculty() {
        cout<<"Faculty is called \n";
    }
};
class Student: virtual public Person {          // Virtual base class
    public:
    Student() {
        cout<<"Student is called \n";
    }
};
class Ta: public Faculty, public Student {

    public:
    Ta(int a = 0, int b = 0) : Person(a,b) // calling parameterised constructor of Person from Ta object 
    {
        cout<<"Ta is called \n";
    }
};
int main() {
    Ta obj(6,7);
    return 0;
}