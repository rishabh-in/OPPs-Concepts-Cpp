#include<iostream>
#include<array>
#include<numeric>
using namespace std;

int arraySum(array<int, 10> &a) {
    int initial_sum = 0;
    return accumulate(a.begin(), a.end(), initial_sum);
}
int main() {
    array<int,10> arr;
    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    cout<<arraySum(arr)<<endl;

    for(int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }

}