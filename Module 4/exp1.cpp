#include<iostream>
using namespace std;
int main() {
    int i = -1;
    try {
        cout<<"inside try"<<endl;
        if (i < 0) {
            throw i;
        }
    }
    catch(int i) {
        cout<<"Caught an error. Value is less than 0"<<endl;
    }
    cout<<"End";
}