#include<iostream>
using namespace std;
int main() {

string name;
int days;
float weightloss;
cout<<" Enter name of the person : ";
cin>> name;
cout<<" Enter target weight loss in kilograms : ";
cin>> weightloss;

days = weightloss * 15;
cout<<" Days required to loss weight : "<<days;

}

