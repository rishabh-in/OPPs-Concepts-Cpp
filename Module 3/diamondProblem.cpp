#include<iostream>
using namespace std;
class Person {
    public:
    Person() {
        cout<<"Person is called \n";
    }
};
class Faculty: public Person {
    public:
    Faculty() {
        cout<<"Faculty is called \n";
    }
};
class Student: public Person {
    public:
    Student() {
        cout<<"Student is called \n";
    }
};
class Ta: public Faculty, public Student {

    public:
    Ta() {
        cout<<"Ta is called \n";
    }
};
int main() {
    Ta obj;
    return 0;
}