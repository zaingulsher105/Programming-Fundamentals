#include<iostream>
using namespace std;
main()
{
int num,sum;
sum = 0;

cout<<" Enter a 4 digit number : ";
cin>> num;

sum = sum + (num%10);
num = num / 10;

sum = sum + (num%10);
num = num / 10;

sum = sum + (num%10);
num = num / 10;

sum = sum + (num%10);
num = num / 10;

cout<<" Sum of individual digits is : "<<sum;
}