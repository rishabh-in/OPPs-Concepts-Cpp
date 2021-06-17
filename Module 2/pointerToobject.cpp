#include<iostream>
using namespace std;
class cl {
    int x, y;

    public:
    int z;
    cl(int k) {
        z = k;
    }
    cl(int i, int j) {
        x = i;
        y = j;
    }
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
};
int main() {
    cl obj1(34, 56),obj2(45, 12), *ptr;
    ptr = &obj1;             // Assign address of obj to ptr
    cout<<ptr->get_y()<<", "<<ptr->get_x()<<endl;
    cout<<ptr<<endl;
    ptr++;                  // This will point to the next object of type cl
    cout<<ptr->get_y()<<", "<<ptr->get_x()<<endl;
    cout<<ptr<<endl;

    // Access the member variable using the pointer
    cl obj3(5);
    int *p;
    p = &obj3.z;
    cout<<*p<<endl;
}