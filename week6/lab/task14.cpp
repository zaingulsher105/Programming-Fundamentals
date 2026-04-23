#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of resistors in series : ";
    cin>>n;

    float res[n];
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+res[i];
    }
    cout<<"total Resistance of the series circuit is : " <<sum<< " ohms. "  <<endl;
}