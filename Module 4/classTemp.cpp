#include<iostream>
using namespace std;

template <typename T>
class Array {
    T *ptr = NULL;
    int size;

    public:
    Array(T arr[], int s);
    void print();
};
template <typename T>
Array<T>::Array(T arr[], int s) {
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++) {
        ptr[i] = arr[i];
    }
}
template <typename T>
void Array<T>::print() {
    for(int i = 0; i< size; i++) {
        cout<<ptr[i]<<" ";      // We can use ptr[i] because the values are stored like that
        // ptr++;          // Incrementing ptr means it will point to the next val
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    Array<int>a(arr, 5);
    a.print();
    return 0;
}