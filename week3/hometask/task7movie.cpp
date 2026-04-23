#include<iostream>
using namespace std;
main()
{
cout<<" Enter the name of movie : ";
string name;
cin>> name;

cout<<" Enter price of an adult ticket : ";
float pat;
cin>> pat;

cout<<" Enter the price of a child ticket : ";
float pct;
cin>> pct;

cout<<" Enter number of adults ticket sold : ";
float tas;
cin>> tas;

cout<<" Enter number of child ticket sold : ";
float cts;
cin>> cts;

cout<<" enter then percentae of the money to be donate : ";
float perc;
cin>> perc;

float allmoney,donation,remain;

allmoney = (pat * tas) + (pct * cts);
donation = perc  * (allmoney / 100);
remain =  allmoney - donation;

cout<<" Movie name is : "<<name;
cout<<endl;
cout<<" Total amount of money is : $"<<allmoney;
cout<<endl;
cout<<" Donation to charity is : $"<<donation;
cout<<endl;
cout<<" Remaining money is : $"<<remain;
cout<<endl;

}