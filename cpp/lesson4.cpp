#include <iostream>
using namespace std;

int main(){
    int fuel;

    cout << "Enter fuel level (0-100): "; 
    cin >> fuel;

    if (fuel == 0){
        cout << "Empty - cannot fly" << endl;
    } else if (fuel <= 25){
        cout << "Critical - return to base" << endl;
    } else if (fuel <= 50){
        cout <<"Low - plan refuel soon" << endl;
    } else if (fuel <=75 ){
        cout << "Sufficient" << endl;
    } else if (fuel <= 100){
        cout << "Full - ready for mission" << endl;
    }
    return 0;
}