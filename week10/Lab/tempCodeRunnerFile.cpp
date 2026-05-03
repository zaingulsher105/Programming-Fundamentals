#include <iostream>
using namespace std;
main()
{
    char cha;
    cout << " Enter a character : ";
    cin >> cha;

    checkAlphabetCase(cha);
}

char checkAlphabetCase(char cha)
{

    if (cha >= 'A' && cha <= 'Z')
    {
        cout << " The character is capital ";
    }
    else
    {
        cout << " The charachter is small ";
    }
}
