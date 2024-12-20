#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int index;
    cout << "Enter index value: ";
    cin >> index;

    try{
        if(index < 4){
            cout << arr[index];
        }
        else{
            throw(index);
        }
    }
    catch(int index){
        cout << "Index value out of size!";
    }
    return 0;
}
