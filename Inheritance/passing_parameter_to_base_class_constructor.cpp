#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(int x){
            a=x;
        }
        void show(){
            cout << "Value of a: " << a << endl;
        }
};

class B:public A{
    protected:
        int b;
    public:
        B(int y,int z):A(z){
            b=y;
        }
        void display(){
            cout << "Value of b: " << b << endl;
        }
};

int main(){
    B obj(10,20);
    obj.show();
    obj.display();
    return 0;
}