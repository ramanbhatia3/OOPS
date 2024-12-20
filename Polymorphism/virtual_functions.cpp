#include <iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout << "class A";
        }
};
class B:public A{
    public:
        void show(){
            cout << "class B";
        }
};

int main(){
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}
