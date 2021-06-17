#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;

int main() {
    list<int> lst = {1,2,3,4,53,2,3,54,4,5,5,4,3};
    vector<int> vec = {1,1,1,2,3,3,3,4,4,5,55,5,5,5,5};
    array<int, 10> arr = {1,1,1,2,2,2,5,5,5,3};

    int count1, count2, count3;
    count1 = count(lst.begin(), lst.end(), 5);
    cout<<"Number of 5 in lst is: "<<count1<<endl;

    count2 = count(vec.begin(), vec.end(), 3);
    cout<<"Number of 3 in vec is: "<<count2<<endl;

    count3 = count(arr.begin(), arr.end(), 2);
    cout<<"Number of 2 in arr is: "<<count3<<endl;


}