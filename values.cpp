#include <iostream>
using namespace std;
int main() {
    int n;
    int largest,smallest,num;
    double sum;
cout<<"Enter no of values: ";
cin>>n;
for(int i =0;i < n;i ++) {
    cout<<"Enter value ";
    cin>>num;
    if(i == 0) {
        largest = smallest=num; }
    if(num > largest)
        largest = num;
    if(num < smallest)
        smallest = num; 
    
    sum += num;
}
cout<<"Largest no is : "<<largest<<endl;
cout<<"Smallest no is : "<<smallest<<endl;
cout<<"Average is : "<< sum/n <<endl;
    return 0;
}