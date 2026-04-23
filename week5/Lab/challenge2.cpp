
#include <iostream>
using namespace std;

main(){
     cout<<" Enter number : ";
     int a;
     cin>> a;

     cout<<"Enter digit : ";
     int dig;
     cin>> dig;




    int count,i;
    for( i = a; i > 0; i/=10){
if(i%10 == dig){
    count++;

}


    }

    cout<<" Frequency of "<<dig<< "in" << a<<" is "<< count ;
    
}