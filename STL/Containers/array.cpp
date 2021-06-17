#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,10> arr;
    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
    }

    for(int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }

}