#include<iostream>
using namespace std;
class Base {

};
class Derived: public Base {

};

int main() {
    Derived d;
    try {
        throw d;
    }
    catch(Derived a) {
        cout<<"Derived exception found"<<endl;
    }
    catch(Base b) {
        cout<<"Base exception found"<<endl;
    }
    return 0;
}