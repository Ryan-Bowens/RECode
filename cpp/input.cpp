#include <iostream>
using namespace std;

/*int main() {
    int speed; int altitude;
    cout << "Enter airspeed (knots): "; cin >> speed; 
    cout << "Enter altitude (ft): "; cin >> altitude; 
    double mach = speed / 661.5;
    cout << "Mach: " << mach << endl; 
    return 0; 
} */
int main(){
    int first; 
    int second;

    cout << "Enter first number: "; 
    cin >> first;

    cout << "Enter second number: "; 
    cin >> second;

    int sum = first + second;
    int difference = first - second; 
    int product = first * second; 

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    return 0;
}