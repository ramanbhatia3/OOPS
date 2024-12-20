#include <iostream>
using namespace std;

class A{
    public:
        int x;
        void set(int a){
            x=a;
        }
        friend void show(A obj);
};

void show(A obj){
    cout << obj.x;
}

int main(){
    A obj;
    obj.set(10);
    show(obj);
    return 0;
}