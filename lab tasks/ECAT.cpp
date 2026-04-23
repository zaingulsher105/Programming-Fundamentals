#include<iostream>
using namespace std;
int main()
{
cout << " Enter your matric marks : ";
int matric;
cin >> matric;
cout << " Enter your intermediate marks : ";
int fsc;
cin>> fsc;
cout<<" Enter your ECAT marks : ";
int ECAT;
cin >> ECAT;
int Aggregate;
Aggregate = ((0.30 * ECAT/400) + (0.45 * matric/1100) + (0.25 * fsc/1200))*100 ;
cout<< "Your Aggregate is: "<<Aggregate<<"%";

}