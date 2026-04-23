#include<iostream>
using namespace std;
main(){
    cout<<" Enter the first word : ";
    string name1;
    cin>> name1;
    cout<<" Enter the second word : ";
    string name2;
    cin>> name2;
    if(name1==name2){
    cout<<" Both words are same. ";
    }
    else{
    cout<<" Both words are different. ";   
    }
}