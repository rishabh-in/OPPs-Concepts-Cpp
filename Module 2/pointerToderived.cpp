#include<iostream>
using namespace std;
class base {
    int i;
    public:
    void set_i(int num) {
        i = num;
    }
    void get_i() {
        cout<<i<<endl;
    }
};
class derived : public base
{
    int j;
    public:
    void set_j(int num) {
        j = num;
    }
    void get_j() {
        cout<<j<<endl;
    }
};

int main() {
    base *bp;
    derived d;
    bp = &d;
    bp->set_i(4);
    bp->get_i();

    // You can't access the member of derived using base pointer
    // bp->set_j();
    // bp->get_j();
    
    // To access derived members using base class pointer we need to cast the base
    // class pointer to derived class pointer.

    ((derived *)bp)->set_j(5);
    ((derived *)bp)->get_j();
}