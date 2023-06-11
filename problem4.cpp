
//Simple program of function overloading
#include <iostream>
using namespace std;

class ABC{
public:
    static int add(int a , int b){
     return a + b ;
    }
    static int add (int a , int b , int c) {
     return a + b + c ;
    }
};
int main() {
    ABC c1;
    cout<<c1.add(10,20)<<endl;
    cout<<c1.add(10,20,30)<<endl;

    return 0;
}
