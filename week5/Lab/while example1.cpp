#include<iostream>
using namespace std;
main(){
    char ch =  'y';
    while(ch == 'y'){
        cout<<" I am happy . "<<endl;
        cout<<" Press y to continue or any number to exit "<<endl;
        cin>> ch;
    }
}