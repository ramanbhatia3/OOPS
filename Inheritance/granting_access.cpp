#include <iostream>
using namespace std;

class Base{
    public:
        int a;
    public:
        void show(){
            cout << a;
        }
};

class Derived:private Base{
    public: 
        using Base::a;
        using Base::show;
};

int main(){
    Derived obj;
    obj.a = 10;
    obj.show();
    return 0;
}