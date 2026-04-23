#include<iostream>
using namespace std;
main(){
   int n1 = 0;
   int n2 = 1;
   int n;
   int next;
   cout<<" Enter how many fibnocaai numbers u want to display : ";
   cin>> n;

   cout<<n1 << ",";
   cout<< n2;
   for(int x = 1; x < n - 1; x = x + 1)
  {next = n1 + n2;
   cout<< ","<<next;
   n1 = n2 ;
   n2 = next;
}
}
