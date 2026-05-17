#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;

    cout << "Enter number: ";
    
    cin >> num;

    for (int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << num * i << endl;
    }

    // int i = 1;
    // while (i <= 10){
    //     cout << num << " * " << i << " = " << num * i << endl;
    //     i++;
    // }
}