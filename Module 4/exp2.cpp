#include<iostream>
using namespace std;
int main() {

    try {
        cout<<"inside try"<<endl;
        throw "a";
        }

    catch(int i) {
        cout<<"Caught an error. Value is less than 0"<<endl;
    }
    catch(char *excp) {
        cout<<"Character error"<<endl;
    }
    catch(...) {
        cout<<"Default exception";
    }
    cout<<"End";
}