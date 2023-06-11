//Write a simple program for polymorphism
//simple example of run time polymorphism in C++. an example without the virtual keyword.
#include<iostream>
using namespace std;
class ABC{
public:
    void eat() {
    cout<<"Eating \n";
    }
};
class CDE : public ABC {
public:
    void eat() {
    cout<<"I am eating \n";
    }
};
int main() {
    CDE e1;
    e1.eat();

    return 0;
}
