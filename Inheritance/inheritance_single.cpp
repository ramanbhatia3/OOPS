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
    public:
        void display(){
            cout << "Value of a is: " << a;
        }
};

int main(){
    B obj;
    obj.get();
    obj.display();
    return 0;
}
