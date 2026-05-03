#include <iostream>
using namespace std;
char checkAlphabetCase(char cha);
main()
{
    char cha;
    cout << " Enter a character (A/a) : ";
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
