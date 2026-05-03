#include <iostream>
using namespace std;
bool symmetrical(int num);
main()
{
    int num;
    cout << " Enter a 3 digit number : ";
    cin >> num;

    if (symmetrical(num))
    {
        cout << " The number is symmetrical. ";
    }
    else
    {
        cout << " The number is not symmetrical. ";
    }
}

bool symmetrical(int num)
{
    int first = num / 100;
    int last = num % 10;

    if (first == last)
    {
        return true;
    }
    else
    {
        return false;
    }
}
