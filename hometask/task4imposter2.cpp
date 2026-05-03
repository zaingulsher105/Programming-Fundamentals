#include<iostream>
using namespace std;
int main() {

float imposter,player,chance;
cout<<" Enter imposters : ";
cin>> imposter;
cout<<" Enter player : ";
cin>> player;

chance = 100 * (imposter / player);
cout<<" Chance : "<<chance<<"%" ;

}