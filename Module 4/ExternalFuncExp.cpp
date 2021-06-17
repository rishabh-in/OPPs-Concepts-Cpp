#include<iostream>
using namespace std;

void Xhandler(int a) {
    if(a){
        throw a;
    }
}
int main()
{
    try {
        cout<<"Start"<<endl;
        Xhandler(0);
        Xhandler(1);
        Xhandler(0);
        Xhandler(3);
    }
    catch(int i) {
        cout<<"Caught exception "<<i<<endl;
    }
    return 0;
    
}