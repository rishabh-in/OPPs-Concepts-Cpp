#include<iostream>
using namespace std;
int main() {
    char x;
    string name;
    // cin.get(x);
    // cout<<x<<endl;
    // getline(cin, name);
    // cout<<name<<endl;
    // cout.write("Rishabh", 5);  // Output = Risha (only 5 characters)
    // cout<<"\n";
    
    // ios::showpos
    int n = 100.0;
    cout.setf(ios::showpos);
    cout<<n<<endl;
    cout.unsetf(ios::showpos);
    
    // ios::showpoint
    float b = 200.0;
    cout.setf(ios::showpoint);
    cout<<b<<endl;
    cout.unsetf(ios::showpoint);

    // width()
    char c = 'A';
    cout.width(5);
    cout<<c<<endl;

    // precision
    float pi = 3.1456;
    cout.precision(3);
    cout<<pi<<endl;

    // fill()
    char ch = 'A';
    cout.fill('*');
    cout.width(10);
    cout<<ch<<endl;
}   