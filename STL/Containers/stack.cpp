#include<iostream>
#include<stack>
using namespace std;
void showStack(stack<int> obj) {
    while(!obj.empty()) {
        cout<<obj.top()<<" ";
        obj.pop();
    }
    cout<<endl;
}

int main() {

    stack<int> s1;
    for(int i = 0; i < 10; i++) {
        s1.push(i);
    }
    showStack(s1);

    for(int i = 0; i < 5; i++) {
        s1.pop();
    }
    showStack(s1);
}