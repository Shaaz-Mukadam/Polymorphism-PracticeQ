//Runtime Polymorphism can be achieved by data members in C++. Let's see an example where we are accessing the field by
// reference variable which refers to the instance of derived class.
#include<iostream>
using namespace std;
class ABC{
public:
    string color = "black";
};
class DEF : public ABC {
public:
    string color = "Red";
};
int main() {
    ABC d = DEF() ;
    cout<<d.color;

    return 0;
}
