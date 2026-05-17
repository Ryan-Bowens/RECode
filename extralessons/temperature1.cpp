#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double cel;
    int far;

    cout << "Enter Farenheit: ";
    cin >> far;

    cel = (far - 32) * 5.0/9;

    cout << "Celsius: " << fixed << setprecision(1) << cel << endl;

    if (cel <= 0){
        cout << "Freezing" << endl;
    } else if (cel < 16){
        cout << "Cold" << endl;
    } else if (cel < 26){
        cout << "Warm" << endl;
    } else if (cel > 25){
        cout << "Hot" << endl;
    }

}