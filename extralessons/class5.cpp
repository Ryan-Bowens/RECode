#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:

    string name;
    double balance;

    BankAccount (string n, double b){
        name = n;
        balance = b;
    }

    void deposit (double amount){
        balance += amount;
    }

    void withdraw (double amount){
        if (balance - amount < 0){
            cout << "Warning, Insufficent Funds! Balance: " << balance << endl;
        } else {
            balance -= amount;
        }
    }

    void printBalance(){
        cout << name << " | Balance: " << balance << endl;
    }
};

int main(){
    BankAccount ryan("Ryan", 100.80);
    BankAccount steph("Steph", 436.40);

    ryan.deposit(438.20);
    steph.deposit(136.60);

    ryan.withdraw(500);
    steph.withdraw(500);

    ryan.withdraw(50);

    ryan.printBalance();
    steph.printBalance();
}