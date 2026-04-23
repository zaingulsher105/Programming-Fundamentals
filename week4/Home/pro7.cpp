#include<iostream>
using namespace std;
main(){
    cout<<" Enter the shape of the figure : ";
    string name;
    cin>> name;
    float num1,num2,square;
    if(name =="square"){
     cout<<" Enter the length : " ;
     cin>> num1;
 square = num1 * num1 ;

 cout<< square ;

    }
    if(name == "rectangle"){
        cout<<" Enter the first length : ";
        float rectangle;
        cin>> num1;
        cout<<" Enter the second length : ";
        cin>> num2;
        rectangle = num1 * num2;
        cout<< rectangle;
    }



    if(name =="circle"){
        cout<<" Enter the length : ";
        float circle;
        cin>> num1;
         circle = 3.14 * (num1 * num1);
         cout<< circle;
    }


    if(name =="triangle"){
        cout<<" Enter the first length : ";
        float triangle;
        cin>> num1;
        cout<<" Enter the second length : ";
        cin>> num2;

        triangle = 0.5 * num1 * num2 ;
        cout<< triangle;
    }
}