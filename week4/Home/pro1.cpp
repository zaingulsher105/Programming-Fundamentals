#include<iostream>
using namespace std;
main(){
    string name,any;
    int pri,final;
    float disc;
    cout<<" Enter country name : ";
    cin>> name;
    cout<<" Enter the amount of ticket in dollar : ";
    cin>> pri;
    if(name=="Ireland"){
    disc = 0.1 ;
    }
    else{
        disc = 0.05 ;
    }
    final = pri - (pri * disc);
    cout<<" The discounted price is : " << final;
}
    