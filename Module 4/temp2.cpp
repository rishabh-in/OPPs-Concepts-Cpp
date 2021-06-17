#include<iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n-i-1; j++) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}
template <typename T>
void swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[5] = {20, 50, 40, 10, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort<int>(arr, n);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}