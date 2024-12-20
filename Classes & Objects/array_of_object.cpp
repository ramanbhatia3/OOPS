#include <iostream>
using namespace std;

class Emp{
    public:
        int id;
        char name[50];

        void input(){
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
        }

        void show(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
        }
};

int main(){
    Emp obj[3];
    int i;
    for(i=0;i<3;i++){
        obj[i].input();
    }
    for(i=0;i<3;i++){
        obj[i].show();
    }
    return 0;
}