#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void get(){
            cout << "Enter the value of a: ";
            cin >> a;
        }
};

class B{
    protected:
        int b;
    public:
        void input(){
            cout << "Enter the value of b: ";
            cin >> b;
        }
};

class C: public A, public B{
    public:
        void display(){
            cout << "Value of a is: " << a << endl;
            cout << "Value of b is: " << b << endl;
        }
};

int main(){
    C obj;
    obj.get();
    obj.input();
    obj.display();
    return 0;
}