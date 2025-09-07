#include <iostream>
using namespace std;
int main () {
    float balance, withdraw;
    cout<< " Enter your account balance : ";
    cin>> balance;
    cout<< " Enter the amount to withdraw : ";
    cin>> withdraw;
    if (withdraw <= balance) {
        balance = balance - withdraw;
        cout << "Transaction successful. Remaining balance is: " << balance;
    }
    else {
        cout << "Insufficient funds. Transaction failed.";
    }
    return 0;
}

