#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a: ";
    cin >> a;

    int b = a/0;
    cout << b;
    return 0;
}
