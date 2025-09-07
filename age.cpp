#include<iostream>
using namespace std;
int main () {
    int birthyear,currentyear;;
    cout<< " Enter your your birthyear: ";
    cin>> birthyear;
    cout<< " Enter current year : ";
    cin>> currentyear;
   if(currentyear>=birthyear){
    cout<<"Your age is : "<<currentyear-birthyear;
   }
   else{
       cout<<"Invalid input";
   }
       
return 0;
}