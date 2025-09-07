#include<iostream>
using namespace std;
int main () {
    int units;
    float bill = 0;
    cout<< " Enter the number of units consumed : ";
    cin>> units;
    if (units <= 200) {
        bill = units * 2 ;
    }
    else if (units <= 400) {
        bill = 200 * 2 + (units - 200) * 3;
    }
    else if (units <= 600) {
        bill = 200 * 2 + 200 * 3 + (units - 400) * 5 ;
    }
    else {
        bill = 200 * 2 + 200 * 3 + 200 * 5 + (units - 600) * 7 ;
    }
    
    cout << "Your electricity bill is: " << bill;
    return 0;
}