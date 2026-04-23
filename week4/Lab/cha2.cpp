#include<iostream>
using namespace std;
main(){
int salary,advance,laptop,totaladvance;
salary=10000;
laptop= 50000;
advance = salary / 2;
totaladvance = advance * 6;
cout<<" Total advance in 6 months is : "<<totaladvance<<endl ;
if(totaladvance >= laptop){
    cout<<" Yes he can buy a laptop for his son. "<<endl;
}
else{
    cout<<" He does not have enough money"<<endl;
}
int need;
need = laptop / advance;
cout<<" He needs a " <<need<< " months more to buy it. ";
}