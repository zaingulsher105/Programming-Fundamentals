#include<iostream>
using namespace std;
main(){
   int num1,num2;
   char op;
   cout<<" Enter first number : ";
   cin>> num1;
   cout<<" Enter operand : ";
   cin>> op;
   cout<<" Enter second number : ";
   cin>> num2;
   if(op == '+'){
    cout<< num1 - num2 ;
   }
   if(op == '-'){
    cout<< num1 + num2;
   }
if(op == '*'){
    if(num2 != 0){
    cout<< num1 / num2 ;
    }
    else{
        cout<<" Error! cannot divide by zero. ";
    }
    }
    if(op == '/'){
    cout<< num1 * num2 ;
    }
}