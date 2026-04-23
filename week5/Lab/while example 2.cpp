#include<iostream>
using namespace std;
main(){

    int num ;
    cout<<" Enter the positive number  : ";
    cin>> num;
    while(num < 0){
        cout<<"error  :"<<num<<" is not a positive value . "<<endl;
        cout<<"Enter the positive number :  ";
        cin>> num;
    }
}