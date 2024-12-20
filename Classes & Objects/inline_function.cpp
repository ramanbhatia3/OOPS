#include <iostream>
using namespace std;

inline int square(int a){
    return a*a;
}

int main(){
    cout << "Square of 5: " << square(5);

    return 0;
}