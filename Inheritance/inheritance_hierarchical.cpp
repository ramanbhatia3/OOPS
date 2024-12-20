#include <iostream>
using namespace std;

class A{
    protected:
        int a,b;
    public:
        void get(){
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }
};

class B: public A{
    public:
        void display(){
            cout << "Value of a is: " << a << endl;
        }
};

class C: public A{
    public:
        void display(){
            cout << "Value of b is: " << b << endl;
        }
};

int main(){
    B obj1;
    obj1.get();
    obj1.display();

    C obj2;
    obj2.get();
    obj2.display();

    return 0;
}