#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountName;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountName = name;
        balance = initialBalance;
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

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount *account = new BankAccount("John Doe", 1000.0);
    account->deposit(500.0);
    account->withdraw(2000.0);
    cout << "Current Balance: " << account->getBalance() << endl;

    // Memory leak: No 'delete' statement
    return 0;
}
