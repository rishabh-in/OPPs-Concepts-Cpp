//lets see a simple example of overloading the binary operators.

// program to overload the binary operators.

#include <iostream>  
using namespace std;  
class A  
{  
    
      int x;  
      public:  
      A(){
      }  
      A(int i)  
      {  
      	x=i;  
      } 
      // void operator +(A a);   

      friend void operator+(A &a, A &b) {
          cout<<"a: "<<a.x<<", b: "<<b.x<<endl;
          cout<<"sum is: "<<a.x+b.x<<endl;
          cout<<endl;
      }   
};  
  
// void A :: operator+(A a)  
// {   
//     cout<<x<<","<<a.x<<endl;
//     int m = x + a.x + a.x;  
//     cout<<"The result of the addition of two objects is : "<<m<<endl;  
  
// }  
int main()  
{  
    A a1(5);  
    A a2(4);  
    a1+a2;
    // can also be called as :-
    operator +(a1, a2); 
    return 0;  
}  