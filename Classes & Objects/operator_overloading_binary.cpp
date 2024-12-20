#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void get(){
            cout << "Enter a: ";
            cin >> a;
        }
        void show(){
            cout << "Value of a: " << a << endl;
        }
        A operator+ (A obj2){
            A obj3;
            obj3.a = a+obj2.a;
            return obj3;
        }
};

int main(){
    A obj1,obj2,obj3;
    obj1.get();
    obj2.get();
    obj3 = obj1+obj2;
    obj3.show();
    return 0;
}