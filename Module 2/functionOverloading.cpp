#include<iostream>
using namespace std;
class cl {
    public:
    int sum(int a, int b, int c) {
        return a + b+ c;
    }
    int sum(int a, int b) {
        return a + b;
    }
};
int main() {
    cl obj1;
    cout<<obj1.sum(4,5,6)<<endl;
    cout<<obj1.sum(2,4)<<endl;
}