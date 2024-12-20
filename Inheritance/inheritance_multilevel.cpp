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

class B: public A{
    protected:
        int b;
    public:
    void input(){
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void display(){
            cout << "Value of a is: " << a << endl;
            cout << "Value of b is: " << b << endl;
        }
};

class C: public B{
    public:
        void disp(){
            display();
        }
};

int main(){
    B obj;
    obj.get();
    obj.input();
    obj.display();

    C obj1;
    obj1.get();
    obj1.input();
    obj1.disp();

    return 0;
}