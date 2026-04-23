#include<iostream>
using namespace std;
main(){
    int dif1;
    int dif2;
    int diff;
    cout<<" Enter temprature of  first city : ";
    cin>> dif1;
    cout<<" Enter temprature of  second city : ";
    cin>> dif2;

    diff = dif1 - dif2 ;

    if(diff>10){
    cout<<" The difference is too big. "<<endl;

    }
}