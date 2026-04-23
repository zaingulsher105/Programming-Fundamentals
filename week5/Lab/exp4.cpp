#include<iostream>
using namespace std;
main()
{

int n, count = 0;
cout<<" Enter a number : ";
cin>> n;

int i;
for(i = n; i > 0; i = i / 10){
    count = count + 1;
}

cout<<" Total digits in the number are : " <<count  ;
}