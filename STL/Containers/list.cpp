#include<iostream>
#include<list>
using namespace std;
void showList(list<int> &lst) {
    for(auto i = lst.begin();i!= lst.end(); i++){
        cout<<*(i)<<" ";
    }
}
int  main() {
    list <int> l;
    for (int i=1;i<=5;i++) {
        l.push_back(i*10);
        l.push_front(i*2);
    }
    showList(l);
}