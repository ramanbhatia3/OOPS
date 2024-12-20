#include <iostream>
using namespace std;

class A{
    public:
        int a;
        static int b;
        A(int x,int y){
            a=x;
            b=y;
        }
        void show(){
            cout << a << endl << b << endl;
        }
        static void display(){
            cout << b << endl;
        }
};

int A::b = 0;

int main(){
    A obj(10,20);
    cout << "obj: ";
    obj.show();

    A obj2(100,200);
    cout << "obj2: ";
    obj2.show();
    cout << "display: ";
    A::display();
    cout << "obj: ";
    obj.show();
    return 0;
}