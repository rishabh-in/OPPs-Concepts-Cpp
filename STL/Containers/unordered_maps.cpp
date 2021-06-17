#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> map1;
    map1["Rishabh"] = 21;
    map1["Sanu"] = 25;


    unordered_map<string, int> :: iterator ptr;
    for(ptr = map1.begin(); ptr != map1.end(); ptr++) {
        cout<<ptr->first<<" "<<ptr->second<<endl;
    }
    
    for(auto ptr: map1) {
        cout<<ptr.first<<endl;
        cout<<ptr.second<<endl;
    }

    // check if the key is present using find() method 
    // If present then it return a pointer to that key else a poiter to the end of map

    if(map1.find("Sanu") == map1.end()) {
        cout<<"Key now found"<<endl;
    }
    else{
        map1["Sanu"] += 2;
    }

    for(ptr = map1.begin(); ptr != map1.end(); ptr++) {
        cout<<ptr->first<<" "<<ptr->second<<endl;
    }



    // Another way we can check that a key is present or not by using count() method

    if(map1.count("Rishabh")) {
        map1["Rishabh"] += 1; 
    }
    else {
        map1["Sanu"] -= 2;
    }

    cout<<map1["Rishabh"]<<endl;
}
