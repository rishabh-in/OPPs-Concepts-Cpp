#include<iostream>
using namespace std;
class Base {
    protected:
    int i;

    public:
    Base(int x) {
        i = x;
    }
};
class Derived: public Base {
    int j;
    public:
    Derived(int a, int b) : Base(b) {
        j = a;
    }
    void show() {
        cout<< i << ", "<< j<<endl;
    }
};

int main() {
    Derived obj(5, 6);
    obj.show();
}