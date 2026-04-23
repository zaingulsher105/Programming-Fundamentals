#include<iostream>
using namespace std;
main(){
    cout<<" Enter the password : ";
    int user_enter;
    cin>> user_enter;
    int my_password= 1234;
    if(my_password==user_enter){
        cout<<" Congrats u cracked the code. ";
    }
    else{
        cout<<" Its not too easy child. ";
    }
}