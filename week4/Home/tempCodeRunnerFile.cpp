#include<iostream>
using namespace std;
main(){
    cout<<" Enter a number between [0-100] : ";
    int num;
    cin>> num;


    int num1= num %10;
    string a1 = "" , a2 = "";

if(num == 0){
    a1 == "zero";
}

if(num1 == 1){a1 == "one";}
if(num1 == 2){a1 = "two";}
if(num1 == 3){a1 = "three";}
if(num1 == 4){a1= "four";}
if(num1 == 5){a1= "five";}
if(num1 == 6){a1= "six";}
if(num1 == 7){a1 = "seven";}
if(num1 == 8){a1= "eight";}
if(num1 == 9){a1 = "nine";}

if(num1 == 10){a1 ="ten";}
if(num == 11){a1 = "eleven";}
if(num == 12){a1 = "twelve";}
if(num == 13){a1 = "thirteen";}
if(num == 14){a1 = "fourteen";}
if(num == 15){a1 = "fifteen";}
if(num == 16){a1 = "sixteen";}
if(num == 17){a1 = "seventeen";}
if(num == 18){a1 = "eighteen";}
if(num == 19){a1 = "nineteen";}


if(num >= 20){a2 = "twenty";}
if(num >= 30){a2 = "thirty";}
if(num >= 40){a2 = "fourty";}
if(num >= 50){a2 = "fifty";}
if(num >= 60){a2 = "sixty";}
if(num >= 70){a2 = "seventy";}
if(num >= 80){a2 = "eighty";}
if(num >= 90){a2 = "ninghty";}

if(num == 100){a2 = "one hundred";}


cout<<a2<<" "<<a1;

}
