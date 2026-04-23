#include<iostream>
using namespace std;
main(){
    int a,b,row;
    cout<<" Enter the number of rows : ";
    cin>> row;

    for( a = 1; a <= row; a= a+ 1){
        for(b=1; b<=a;b=b+1){
            cout<<" * ";
    }
cout<<endl;
    }

}