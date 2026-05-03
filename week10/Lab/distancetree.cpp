#include <iostream>
#include <cmath>


using namespace std;

float calculation( int angle, int distance );
int main()
{
    float distance, angle;
    cout << " Enter the distance from the base(in feet) : ";
    cin >> distance;
    cout << " Enter the angle of elevation (in degrees) : ";
    cin >> angle;

   
    cout << " The height of the tree is " << calculation(angle, distance) << endl;
}

float calculation (int angle,int distance ){
    float angle_convert = angle * 0.01746242;
    float calculation = tan(angle_convert);
    float height = distance * calculation;

}