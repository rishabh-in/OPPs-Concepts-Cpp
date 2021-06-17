#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,int> map1;

    map1.insert(pair<int,int>(0,0));
    for(int i = 1; i <= 10; i++) {
        map1.insert(pair<int,int>(i, i*2));
    }
    for(auto i = map1.begin(); i!=map1.end(); i++) {
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<endl;

    map<int,int> map2(map1.begin(), map1.end());

    for(auto i = map2.begin(); i!=map2.end(); i++) {
        cout<<i->first<<" "<<i->second<<endl;
    }

    // Remove am item using remove() method

    int num = map1.erase(5);            // return 1 if found.
    cout<<num<<endl;
}