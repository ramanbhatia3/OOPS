#include <iostream>
using namespace std;

class A{
    public:
        int x,y;
        A(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout << x << endl << y << endl;
        }
        A(A &P){
            x = P.x;
            y = P.y;
        }
};

int main(){
    A obj(10,20);
    obj.display();
    A obj2(obj);
    obj2.display();
    return 0;
}