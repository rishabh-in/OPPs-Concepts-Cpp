#include<iostream>
#include<cstring>
using namespace std;
class Base {
    public:
    char new_str[20];
    int x;
    Base() {
        *new_str = 0;
        x = 0;
    }
    Base(char *s, int n) {
        strcpy(new_str, s);
        x = n;
    }
};
int main() {
    try {
        int i;
        cout<<"Enter a positive number \n>";
        cin>>i;
        if(i < 0) {
            throw Base("Not positve", i);
        }
    }
    catch(Base b) {
        cout<<b.new_str<<": "<<b.x<<endl;
    }
    return 0;
}