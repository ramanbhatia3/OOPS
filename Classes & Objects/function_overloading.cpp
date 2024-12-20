#include <iostream>
using namespace std;

class A{
    public:
        void add(int a,int b){
            int c = a+b;
            cout << a << "+" << b << "=" << c << endl;
        }

        void add(int x,int y, int z){
            int sum = x+y+z;
            cout << x << "+" << y << "+" << z << "=" << sum << endl;
        }
};

int main(){
    A obj;
    obj.add(2,3);
    obj.add(1,4,9);

    return 0;
}