#include<iostream>
using namespace std;
main(){
 
string n,course;
int age;



    for(int i=1;i<=3;i++)
    {
        cout<<"Enter username : ";
        string name;
        cin>> name;

        cout<<"Enter the password : ";
        int code;
        cin>> code;

        if(name=="admin" && code == 1234)
        {
            cout<<" Login successful. \n";
        break;
        }
        else{
            cout<< " Wrong login.  \n";
        }
    }
    

        for (int i = 0; i<5;i++){
            cout<<"\n------University Management System------\n";
            cout<<" 1. Add student. \n";
            cout<<" 2. View student. \n";
            cout<<" 3. Add course. \n";
            cout<<" 4. Exit. \n";
        
            cout<<" Enter choice : ";
            int choice;
            cin>> choice;

        if(choice==1){
            cout <<" Enter student name : ";
        
            cin>>n;
            cout<<" Enter student age : ";
           
            cin>> age;

cout<<" Student added successfully. \n";
        
        }

        else if(choice ==2)
        {
            
            if( n != "")
            {
              cout<<" Student name : "<< n <<endl;
              cout<<" Student age : "<< age <<endl;
            }
            else{
                cout<< " No student record found. ";
            }
        }
        else if (choice == 3){
            cout<<" Enter course name : ";
            cin>> course;

            cout<<" Course added successfully. "<<endl;
        }
    else if (choice==4){
        cout<<" Program ends. ";
        break;
    }
    }
}


