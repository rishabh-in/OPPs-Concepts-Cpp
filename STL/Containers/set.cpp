// Set automatically insert the elements in sorted order( increasing order)

#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int, greater<int>> s1;          // Desending order
    s1.insert(4);
    s1.insert(1);
    s1.insert(5);
    s1.insert(6);
    s1.insert(4);       // It will now be inserted again
    s1.insert(8);
    s1.insert(9);
    s1.insert(2);
    s1.insert(3);
    s1.insert(7);
    s1.insert(22);
    for(auto i = s1.begin(); i != s1.end(); i++) {
        cout<<*i<<" ";
    }

    cout<<endl;
    set<int> s2(s1.begin(), s1.end());
    for(auto i = s2.begin(); i != s2.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    int num = s2.erase(7);              // return 1 if found.
    cout<<num<<endl;

    s1.erase(s1.find(5));
    for(auto i = s1.begin(); i != s1.end(); i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i = s2.begin(); i != s2.end(); i++) {
        cout<<*i<<" ";
    }
    

    cout<<endl;
}