#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void set(){
            cout << "Enter the value of a: ";
            cin >> a;
        }
        void display(){
            cout << "Value of a is: " << a;
        }
};

class B: public A{
    public:
        void show(){
            set();
            display();
        }
};

int main(){
    B obj;
    obj.show();
    return 0;
}