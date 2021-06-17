#include<iostream>
using namespace std;
class cl {
    int x, y;

    public:
    cl(int i, int j) {
        x = i;
        y = j;
    }
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
};
int main() {
    cl obj[3] = {
        cl(1, 3),
        cl(2, 4),
        cl(5, 6)
    };
    int i;
    for(i=0;i<3;i++) {
        cout<<obj[i].get_y()<<", "<<obj[i].get_x()<<endl;
    }
}