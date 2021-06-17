#include<iostream>
using namespace std;
class box {

    public:
    box() {
        cout<<"Constructor is called"<<endl;
    }
    ~box() {
        cout<<"Destructor is called"<<endl;
    }
};
int main() {
    box *myboxarray = new box[4];
    delete [] myboxarray;

}