#include <iostream>
using namespace std;
string oddeven(int num);

main()
{
    cout << " Enter a 5 digit number :  ";
    int num;
    cin >> num;

    cout<< oddeven(num);
}

string oddeven(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    if (sum % 2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}