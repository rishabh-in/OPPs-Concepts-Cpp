#include<iostream>
using namespace std;
int main() {
    int arr[20] = {10,20,30,40,50};
    int *ptr;
    
    ptr = arr;              // '&' is used of variables or objects.
    cout<<ptr<<endl;        // address of first element i.e 10- 0x7ffe1db3eb40
    cout<<*ptr<<endl;

    // To access the fifth element of arr - 

    cout<<*(ptr + 4)<<endl;
    cout<<endl;
    ///////////////////////////////////////////////////////

    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

    int abc = 200;
    int *j = &abc;
    change(&j);

}

void change(int **newVal) {
    int sum = 50;
    sum = **newVal;
    cout<<sum<<endl;
}