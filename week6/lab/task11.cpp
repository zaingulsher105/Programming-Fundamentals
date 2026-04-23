#include<iostream>
using namespace std;
main(){

    int n;
    cout<<" Enter the number of element :  \n";
    cin>> n;

    int num[n];
    if(n<=0){
        cout<<" Invalid input. Number of elemnts musts be greater then zero. ";

    }

    cout<<" Enter " << n << " numbers , one per line. \n";
    for(int i=0;i<n;i++){
        cin>> num[i];

    }
    for(int i=n-1; i>=0; i--){
        cout<< num[i] << " " ;

    }
}
