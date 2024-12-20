#include <iostream>
using namespace std;

class A{
    public:
        virtual ~A(){
            cout << "Destructor of class A" << endl;
        }
};
class B:public A{
    public:
        ~B(){
            cout << "Destructor of class B" << endl;
        }
};

int main(){
    A *ptr = new B;
    delete ptr;
    return 0;
}