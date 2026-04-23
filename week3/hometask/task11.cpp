#include<iostream>
using namespace std;
int main() {

int age,move,average;
cout<<" Enter age :";
cin>> age;
cout<<" Enter moves : ";
cin>> move;

average = age / (move + 1);

cout<<" Average years : "<<average;
}