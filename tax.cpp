#include<iostream>
using namespace std;
int main () {
    float income, tax;
    cout<< " Enter your income : ";
    cin>> income;
    if (income <= 250000)
        tax = 0;
    else if (income <= 500000)
        tax = 0.05 * (income - 250000);
    else if (income <= 1000000)
        tax = 12500 + 0.20 * (income - 500000);
    else
        tax = 112500 + 0.30 * (income - 1000000);
    cout<<"Your tax is: " << tax;
    return 0;
}