#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    const string& accountName;
    double balance;

public:
    BankAccount(const string& name, double initialBalance)
        : accountName(name), balance(initialBalance) {
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance - amount < 0) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    account.deposit(500.0);
    account.withdraw(2000.0);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}