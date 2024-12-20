#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int a){
            age = a; 
        }
        void display(){
            cout << age << endl;
        }
};

int main(){
    Person *ptr = new Person(25);
    ptr->display();
    ptr->age=50;
    ptr->display();
    delete ptr;
    return 0;
}