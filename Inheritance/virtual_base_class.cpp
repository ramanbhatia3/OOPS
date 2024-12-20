#include <iostream>
using namespace std;

class A{
    protected:
        int a,b;
    public:
        void get(){
            cout << "Getting"<< endl;
        }
};

class B: virtual public A{
    public:
        void eat(){
            cout << "Eating" << endl;
        }
};

class C: virtual public A{
    public:
        void display(){
            cout << "Displaying" << endl;
        }
};

class D: public B,public C{
    public:
        void show(){
            cout << "Showing" << endl;
        }
};

int main(){
    D obj;
    obj.eat();

    return 0;
}