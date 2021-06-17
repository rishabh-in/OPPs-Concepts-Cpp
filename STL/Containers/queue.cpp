#include<iostream>
#include<queue>
using namespace std;
void showQueue(queue<int> obj) {
    while(!obj.empty()) {
        cout<<obj.front()<<" ";
        obj.pop();
    }
    cout<<endl;
}
int main() {
    queue<int> q1;
    for(int i = 0; i < 10; i++) {
        q1.push(i);
    }
    showQueue(q1);

    for(int i = 0; i < 5; i++) {
        q1.push(i);
    }
    showQueue(q1);

    for(int i = 0; i < 7; i++) {
        q1.pop();
    }
    showQueue(q1);

    cout<<q1.size()<<endl;
}