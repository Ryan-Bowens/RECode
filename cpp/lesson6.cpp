#include <iostream>
using namespace std;

/* double calcMach(int speed) { return speed / 661.5; } 
int main() { 
    double mach = calcMach(500); 

    cout << "Mach: " << mach << endl;
    
    double mach2 = calcMach(800);
    
    cout << "Mach: " << mach2 << endl; return 0; 
} */

/* void printStatus(int fuel) { 
    if (fuel > 50) { 
        cout << "Fuel OK" << endl; 
    } else { 
        cout << "Fuel Low" << endl; 
    } 
} int main() { 
    printStatus(80); 
    printStatus(30); 
    return 0; 
} */

double calcMach(int speed) {
    return speed / 661.5;
}
void printFuelStatus(int fuel) {

    cout <<"Fuel Status: ";

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

}

int main(){

    int speed;
    int fuel;

    cout << "Enter airspeed (knots): ";
    cin >> speed;

    cout << "Enter fuel level: ";
    cin >> fuel;

    cout << "Mach: " << calcMach(speed) << endl;
    
    printFuelStatus(fuel);

    return 0;

}
