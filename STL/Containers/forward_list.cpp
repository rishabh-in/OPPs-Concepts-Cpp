#include<iostream>
#include<forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {1,2,3};

    // fl.push_front(5);
    // fl.emplace_front(5);
    
    forward_list<int>::iterator ptr = fl.begin();

    fl.emplace_after(ptr, 5);

    for(auto i = fl.begin(); i != fl.end(); i++ ) {
        cout<<*i<<" ";
    }
    cout<<endl;



}