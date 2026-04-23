#include<iostream>
using namespace std;
main(){
cout<<"Enter your bill : ";
int bill;
cin>> bill;
int discount,finalamount;
if(bill <= 5000){
    discount= (5 * bill) /100; 
}
else{
    discount = (10 * bill) /100;
}
finalamount = bill - discount;
cout<<" Total discount is : " <<discount <<endl;
cout<<" Final amount to pay : " <<finalamount <<endl;

}
