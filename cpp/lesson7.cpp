#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> aircrafts = {
        "F-35", "F-22", "B-2", "SR-71", "F-16"
    };

    for (int i = 0; i < aircrafts.size(); i++){
        cout << i + 1 << ". " << aircrafts[i] << endl;
    }
}
