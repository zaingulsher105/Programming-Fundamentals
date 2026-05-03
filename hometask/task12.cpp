#include<iostream>
using namespace std;
main() {

int paint,width,height,formula;
cout<<" Enter number of square meter u can painted  : ";
cin>> paint;
cout<<" Enter width of the single wall : ";
cin>> width;
cout<<" Enter height of the single wall :";
cin>> height;

formula = paint / (width * height);
cout<<" Walls painted : "<<formula;

}