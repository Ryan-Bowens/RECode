#include <iostream>
#include <memory>
using namespace std;

int main(){

    int altitude = 35000;

    int* ptr = &altitude;

    cout << *ptr << endl;

    *ptr = 40000;

    cout << altitude << endl;

}