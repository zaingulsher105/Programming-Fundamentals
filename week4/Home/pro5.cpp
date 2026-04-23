#include<iostream>
using namespace std;
main(){
    cout<<" Enter the number of holidays : ";
    int holi;
    cin>> holi;
    int work,play,norm=30000;
    work = 365 - holi;
    play = (work * 63) + (holi * 127);

    int diff,hour,mint;
    if(play <= norm){
        cout<<" Tom will sleep well "<<endl;

        diff = norm - play;

        hour = diff/60;
        mint = diff % 60;
        cout<< hour <<" hours and " << mint<< "minutes are less for play <<endl ";

    }
    else{

        cout<<" tom will run away. "<<endl;
        diff = play - norm;

        hour = diff / 60;
        mint = diff % 60;
        cout<< hour << " hours and " << mint << " minutes are more to play. " ;
    }
}