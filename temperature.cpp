#include <iostream>
using namespace std;
int main() {
    int temp[]={55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,92,90,93,87,80,78,79,72,68,61,59};
    int hot = 0,cold = 0,pleasant = 0;
   
    int n=sizeof(temp)/sizeof(temp[0]);
    for(int i = 0;i < n;i ++) {
        cout<<"Temperature : "<<temp[i] << " -> ";
        if(temp[i] >= 85)
        {
            cout <<"Hot day" <<endl; 
            hot++;
        }
            else if(temp[i] >= 60 && temp[i] <= 84)
            {
                  cout <<"Pleasant day" <<endl;
                pleasant++;}
                else
                   {
                      cout <<"Cold day" <<endl;
                    cold++;}
                   }
    cout<<"No of hot days : " <<hot <<endl;
    cout<<"No of pleasant days : " <<pleasant <<endl;
    cout<<"No of cold days : " <<cold <<endl;
    return 0;
}