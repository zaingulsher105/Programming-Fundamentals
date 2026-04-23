#include<iostream>
using namespace std;
main() {

int velocity,vf,vi,a,t;
cout<<" Enter initial velocity : ";
cin>> vi;
cout<<" Enter acceleratrion : ";
cin>> a;
cout<<" Enter time : ";
cin>> t;

velocity = (t * a) + vi;
cout<<" Final velocity : "<<velocity;


}