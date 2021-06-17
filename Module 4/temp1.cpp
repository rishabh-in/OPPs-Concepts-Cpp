#include<iostream>
using namespace std;

template <typename T>
int myMax(T a, T b) {
    return (a > b)? a: b;
}
int main() {
    cout<<myMax<int>(5, 6)<<endl;
    cout<<myMax<char>('a', 'b')<<endl;
}