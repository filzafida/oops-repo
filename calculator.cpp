#include<iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return b != 0 ? a/b : 0;
}
int mod(int a, int b) {
    return b != 0 ? a % b : 0;
}
int main() {
    int a, b;
    cout << "Enter two integers: \n";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /, %):\n ";
    char op;
    cin >> op;
    switch(op) {
        case '+':
            cout << "Result: " << add(a, b) ;
            break;
        case '-':
            cout << "Result: " << subtract(a, b) ;
            break;
        case '*':
            cout << "Result: " << multiply(a, b) ;
            break;
        case '/':
            cout << "Result: " << divide(a, b) ;
            break;
        case '%':
            cout << "Result: " << mod(a, b) ;
            break;
        default:
            cout << "Invalid operator" ;
            break;
    }
    return 0;
}