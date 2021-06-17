//// .* operator is used when we try to access the members of an object using an object or a reference

#include<iostream>
using namespace std;

class cl {
    public:
    int val;
    cl(int i) {
        val = i;
    }
    int double_data() {
        return val + val;
    }
};

int main() {
    int cl::*data;   // data member pointer
    int (cl::*func)();  // member function pointer
    cl obj1(5), obj2(6);
    data = &cl::val;       // get the offset of generic val
    func = &cl::double_data;  // get the offset of generic double_data
    cout<< obj1.*data<<", "<<(obj1.*func)();
    cout<<endl;
    cout<<obj2.*data<<", "<<(obj2.*func)()<<endl;

}