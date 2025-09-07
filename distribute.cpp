#include <iostream>
using namespace std;
int main () {
    int friends;
    float totalbill;
    cout<< " Enter the total bill amount : ";
    cin>> totalbill;
    cout<< " Enter the number of friends : ";
    cin>> friends;
    if (friends > 0) {
        cout << "Each friend should pay: " << totalbill / friends;
    }
    else {
        cout << "you have no friends 😭";
    }
    return 0;
}