#include<iostream>
using namespace std;
main(){
    cout<<" Enter the number of red roses : ";
    int rose;
    cin>> rose;
    cout<<" Enter the number of white roses : ";
    int white;
    cin>> white;
    cout<<" Enter the number of tulips : ";
    int tulip;
    cin>> tulip;   
    float total,disc,final;

    total = (2 * rose) + (4.10 * white) + (2.50 * tulip);
    cout<<" Total amount is : "<<total<<endl;
    if(total>200){
        disc = (20 * total) / 100;
        final = total - disc ;
        cout<<" Your Amount to pay after discount is : "<<final;
    }
}