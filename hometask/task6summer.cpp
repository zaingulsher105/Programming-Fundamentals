#include<iostream>
using namespace std;
main()
{
    float weight,price,area,pep,esfp;
    cout<<" Enter the weight of the bag : ";
    cin>> weight;
    cout<<" Enter the cost of the bag n: ";
    cin>>price;
    cout<<" Enter the size of the area bag can cover : ";
    cin>> area;
     
pep = price / weight;
cout<<" Price of the fertilizer for each pound : "<<pep;  
cout<<endl;

esfp = price / area;
cout<<" Cost of using fertilizer for each square foot of the ground : "<<esfp;
}