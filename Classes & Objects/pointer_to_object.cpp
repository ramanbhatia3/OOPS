#include <iostream>
using namespace std;

class demo{
    public:
        void show(){
            cout << "Hello World!" << endl;
        }
};

int main(){
    demo obj;
    demo *ptr = &obj;
    obj.show();
    ptr->show();
}