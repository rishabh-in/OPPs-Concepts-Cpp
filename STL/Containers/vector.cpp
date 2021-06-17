#include<iostream>
#include<vector>
using namespace std;
int  main() {
    vector <int> v;
    for (int i=1;i<=10;i++) {
        v.push_back(i*10);
        cout<<v.size()<<" ";
    }

    // Printing the vector
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";           // we can also use v.at(i)
    }
    cout<<endl;

    for(auto i = v.rbegin(); i!=v.rend(); i++) {
        cout<<(*i)<<" ";           // we can also use v.at(i)
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.front()<<endl;          // front element
    cout<<v.back()<<endl;           // last element


    ///// Iterator in  vector
    vector<int> ar = {1,2,3,4,5};
    vector<int> ar1 = {10,20,30};
    vector<int>::iterator ptr = ar.begin();
    advance(ptr, 4);

    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));

    for(int &x: ar) {
        cout<<x<<" ";               // 1 2 3 4 10 20 30 5
    }

}