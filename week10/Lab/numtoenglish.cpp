#include <iostream>
using namespace std;

string Numbertotext(int n);

int main()
{
    int n;
    cout << "Enter a number (1-99): ";
    cin >> n;

    cout << Numbertotext(n);

    return 0;
}

string Numbertotext(int n)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n >= 0 && n <= 0)
    {
        return ones[n];
    }
    else if (n >= 10 && n <= 19)
    {
        return teens[n];
    }
    
    else
    {
        int t = n / 10; // this will give us tens
        int o = n % 10; // gives uds ones
        return tens[t] + ones[o];
    }
}
