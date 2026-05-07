#include <iostream>
#include <string>
using namespace std;

    class Aircraft {
        public:

        string name; 
        int fuel;
        int altitude;

        Aircraft (string n, int f, int alt){
            name = n; 
            fuel = f; 
            altitude = alt;
        }

        void climb(int amount){
            altitude += amount; 
            fuel -= 5;
        }

        void printStatus(){
            cout << name << " | Fuel: " << fuel << " | Altitude: " << altitude << endl;
        }

        void refuel(){
            fuel = 100;
        }
    };
    int main(){
        Aircraft bomber("Bomber", 80, 0);
        Aircraft f66("F-66", 0, 0);

        bomber.climb(30000);
        bomber.printStatus();

        f66.refuel();
        f66.printStatus();

        return 0;
    }
