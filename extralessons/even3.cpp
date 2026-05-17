#include <iostream>
#include <string>
using namespace std;

bool isEven(int num){
    return num % 2 == 0;
}

int main(){
for (int i = 1; i <= 5; i++){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isEven(num)){
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }
}
}