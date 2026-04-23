#include<iostream>
using namespace std;
main()
{


int wins, loses, draws, points;
cout<<" Enter the number of wins : ";
cin>> wins;
cout<<" Enter number of draws : ";
cin>> draws;
cout<<" Enter the number of loses : ";
cin>> loses;


points = (wins * 3) + (draws * 1) + (loses * 0);
cout<<" This team has obtained :"<<points;

}