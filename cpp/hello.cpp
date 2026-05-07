#include <iostream>
using namespace std;

/*int main() {
    cout << "F-35" << endl;
    cout << "Lightning II" << endl;
    return 0;
}
// basic output */

#include <string> 
using namespace std; 
int main() { 
    string aircraft = "F-35"; int crew = 1; double maxSpeed = 1.6; 
    /* Mach*/ bool stealth = true; 
    cout << aircraft << " | Crew: " << crew << endl; 
    cout << "Mach: " << maxSpeed << endl; 
    cout << "Stealth: " << stealth << endl; 
    return 0; 
}