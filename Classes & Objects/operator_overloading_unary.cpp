#include <iostream>
using namespace std;

class A{
    int x;
    public:
        void get(){
            cout << "Enter x: ";
            cin >> x;
        }
        void show(){
            cout << x << endl;
        }
        void operator++(int){
            x=x+1;
        }
};

int main(){
    A obj;
    obj.get();
    obj.show();
    obj++;
    obj.show();
    return 0;
}