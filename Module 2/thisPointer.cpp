#include<iostream>
using namespace std;
class Demo {
    int number;
    string name;

    public:
    void set_values(int n, string s) {
        this->number = n;
        this->name = s;
    }
    void display() {
        cout<<number<<endl;
        cout<<name<<endl;
    }
};
int main()
{
    Demo obj;
    obj.set_values(1000, "Rishabh");
    obj.display();
}