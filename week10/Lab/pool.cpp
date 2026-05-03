#include <iostream>
using namespace std;

// Function to calculate pool state
void calculatePoolState(int V, int P1, int P2, float H)
{
    float pipe1 = P1 * H;
    float pipe2 = P2 * H;
    float totalWater = pipe1 + pipe2;

    if (totalWater <= V)
    {
        float poolPercent = (totalWater / V) * 100;
        float p1Percent = (pipe1 / totalWater) * 100;
        float p2Percent = (pipe2 / totalWater) * 100;

        cout << "The pool is " << (int)poolPercent << "% full. ";
        cout << "Pipe 1: " << (int)p1Percent << "%. ";
        cout << "Pipe 2: " << (int)p2Percent << "%.\n";
    }
    else
    {
        float overflow = totalWater - V;

        cout << "For " << H << " hours the pool overflows with " 
             << (int)overflow << " liters.\n";
    }
}

// Main function
int main()
{
    int V, P1, P2;
    float H;

    cout << "Enter volume of pool in liters: ";
    cin >> V;

    cout << "Enter flow rate of first pipe per hour: ";
    cin >> P1;

    cout << "Enter flow rate of second pipe per hour: ";
    cin >> P2;

    cout << "Enter hours the worker is absent: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);

    return 0;
}