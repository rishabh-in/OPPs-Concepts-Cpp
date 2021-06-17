#include<iostream>
using namespace std;
class demo {
    public:
    int a, b;
    friend void operator >>(demo &d, istream &myinput) {
        myinput>>d.a>>d.b;
    }
};
int main() {
    demo a;
    a >> cin;
    operator >> (a, cin);
}