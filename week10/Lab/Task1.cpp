#include <iostream>
using namespace std;
void add(int number1, int number2);
int main()
{
    int number1, number2;
    cout << " Enter the number 1 : ";
    cin >> number1;
    cout << " Enter the number 2 : ";
    cin >> number2;
    add(number1, number2);
    return 0;
}

void add(int number1, int number2)
{
    cout << " Sum is  " << number1 + number2;
}