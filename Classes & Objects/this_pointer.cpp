#include <iostream>
using namespace std;

class A{
    public:
        int a,b;
        A(int a,int b){
            this->a=a;
            this->b=b;
        }
        void show(){
            cout << a << endl << b;
        }
};

int main(){
    A obj(10,20);
    obj.show();
    return 0;
}