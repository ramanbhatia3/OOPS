#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter two values: ";
    cin >> a >> b;

    try{
        if(b!=0){
            c=a/b;
            cout << c;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout << "Cannot divide by zero!";
    }
    return 0;
}
