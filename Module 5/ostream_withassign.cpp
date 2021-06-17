#include<iostream>
using namespace std;
class demo {
    int a, b;
    public:
    demo(int i, int j) {
        a = i;
        b = j;
    }
    friend void operator <<(demo &d, ostream &myoutput) {
        myoutput<<d.a<<" "<<d.b<<endl;
    }
};
int main() {
    demo a(10,23);
    a << cout;
    operator << (a, cout);
}