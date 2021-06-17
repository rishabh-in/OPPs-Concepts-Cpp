// By default c++ creates max heap for priority queue

// Syntax for creating min heap
//  priority_queue<int, vector<int>, greater<int>> obj;
/////////////

#include<iostream>
#include<queue>
using namespace std;
void showQueue(priority_queue<int> obj1, priority_queue<int, vector<int>, greater<int>> obj2) {
    while(!obj1.empty()) {
        cout<<obj1.top()<<" ";
        obj1.pop();
    }
    cout<<endl;
    while(!obj2.empty()) {
        cout<<obj2.top()<<" ";
        obj2.pop();
    }
    cout<<endl;
}
int main() {
    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
    for(int i = 0; i < 10; i++) {
        q1.push(i);
        q2.push(i);
    }

    showQueue(q1, q2);
    for(int i = 0; i < 5; i++) {
        q1.push(i);
        q2.push(i);
    }
    showQueue(q1, q2);

    for(int i = 0; i < 7; i++) {
        q1.pop();
    }
    showQueue(q1, q2);

    cout<<q1.size()<<endl;
    cout<<q1.size()<<endl;
}