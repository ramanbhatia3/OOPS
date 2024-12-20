#include <iostream>
using namespace std;

class A{
    public:
        void eat(){
            cout << "Eating \n";
        }
};

class B{
    public:
        void walk(){
            cout << "Walking \n";
        }
};

class C: public A,public B{ // Multiple Inheritance
    public:
        void bark(){
            cout << "Barking \n";
        }
};

class D:public C{ // Multi-level Inheritance
    public:
        void sleep(){
            cout << "Sleeping \n";
        }
};

class E:public C{ // Hierarchical Inheritance
    public:
        void play(){
            cout << "Playing \n";
        }
};

int main(){
    C obj1;
    obj1.eat();
    obj1.walk();
    obj1.bark();

    D obj2;
    obj2.bark();
    obj2.eat();
    obj2.sleep();
    obj2.walk();

    E obj3;
    obj3.eat();
    obj3.play();

    return 0;
}