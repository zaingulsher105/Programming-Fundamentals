#include<iostream>
using namespace std;
main() {

int paint,width,height,formula;
cout<<" Enter paint area : ";
cin>> paint;
cout<<" Enter width : ";
cin>> width;
cout<<" Enter height :";
cin>> height;

formula = paint / (width * height);
cout<<" Walls painted : "<<formula;

}