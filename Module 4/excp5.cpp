#include<iostream>
using namespace std;

void Xhandler(int a) {
    try {
        if(a > 2)
        throw a;
    }
    catch(int i) {
        cout<<"Exception inside Xhandler() "<<a<<endl;
    }
    if(a < 2){
        throw a;
    }
}
int main() {
    try {
        Xhandler(5);
        Xhandler(3);
        Xhandler(4);
        Xhandler(1);
    }
    catch(int a) {
        cout<<"Exception inside main() "<< a;
    }
    return 0;
}