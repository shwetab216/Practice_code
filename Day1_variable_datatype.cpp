/*This program demonstrates the use of variables and data types in c++*/
#include<iostream>
using namespace std;
int main()
{
    int vehicleSpeed = 80;
    int speedLimit = 60;

    if(vehicleSpeed > speedLimit)
    {

    cout<<"overspeeding warning\n";
    }
    else
    {
        cout<<"Speed is within limit\n";
    }

    return 0;
    
}
