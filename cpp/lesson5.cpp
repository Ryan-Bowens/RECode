#include <iostream>
using namespace std;

int main(){
    int fuel;

    cout << "Enter starting fuel: ";
    cin >> fuel;

    int i = 1;
    while (fuel > 0) {
        fuel -= 10;
        cout << "Second " << i << ": " << fuel << endl; 
        i++;
    }
        cout << "Fuel depleted" << endl;

}