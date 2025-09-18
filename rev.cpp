#include<iostream>
using namespace std;
int main () {
    int n;
    do{
    cout << "Enter a positive no : ";
    cin >> n;
    if(n == 0) 
        break;
        int rev = 0;
    int temp =n;
    while(temp > 0) {
        rev= rev * 10 + temp % 10;
        temp /= 10;}
    cout << "Reversed no is : " << rev << endl;

}
while(true);
    return 0;
}