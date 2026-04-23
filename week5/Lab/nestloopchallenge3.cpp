#include<iostream>
using namespace std;
main(){
    int  code,choice,balance,depomoney,withdraw;
    

    for(int i=0;i<3;i++){

        cout<<" Enter your pin : ";
        cin>> code;

        if(code==1234){
            cout<<" Login successful. \n";

            for(int i=0;i<5;i++){
                cout<<" 1. Check balance \n";
                cout<<" 2. deposit money \n";
                cout<<" 3. Withdraw money \n";
                cout<<" 4. Exit \n";


                cout<<" Choose an option ";
                cin>> choice;



                if(choice==1){
                    cout<<"Current balance is : "<<balance<<" Rs \n" ;
                }


                else if(choice==2){
                    cout<<"Deposit money : \n";
                    cin>> depomoney;
                    balance+=depomoney;

                    
                    cout<<"Money deposit successful. \n";
                }


                else if(choice==3){
                    cout<< "Withdraw money :\n " ;
                    cin>> withdraw ;

                    if(withdraw<=balance){
                        balance-=withdraw;

                        cout<<" Withdraw successful ";
                    }
                    else{
                        cout<<" Insufficient balance ";
                    }
                }


                else if(choice==4){
                    cout<<" Program ends ";
                    break;

                }
                else{
                    cout<<" Invalid option ";
                }
                
                }

                break;
            }
            else{
                cout<<" Worng pin. Try again ";
            }
            if(i==3&&(code==1234)){
                cout<<" Too many attempts. Try again later! ";
                cout<<" Program ends \n";
            }
        }







    
    }
