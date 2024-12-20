#include <iostream>
using namespace std;

class A{
    public:
        int value;
        void setvalue(int v){
            value = v;
        }
};

void modify(A object){
    object.value = 20;
}

int main(){
    A obj;
    obj.setvalue(10);
    cout << obj.value << endl;
    modify(obj);
    cout << obj.value << endl;

    return 0;
}