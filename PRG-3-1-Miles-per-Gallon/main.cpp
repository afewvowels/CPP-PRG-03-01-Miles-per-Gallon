// This program calculates miles per gallon (MPG)
// from inputs: total distance, total number of gallons
// a car can travel, that a car can hold.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intTotalDistance;
    int intTotalGallons;
    
    float fltTotalMPG;
    
    cout << "Please enter the maximum distance your car can travel: " << endl;
    cin >> intTotalDistance;
    
    cout << "Please enter the size of you gas tank in gallons: " << endl;
    cin >> intTotalGallons;
    
    fltTotalMPG = static_cast<float>(intTotalDistance) / static_cast<float>(intTotalGallons);
    
    cout << "The MPG of your car is: " << endl;
    cout << setprecision(1) << fixed << fltTotalMPG; //Set decimal carry-over to single digit and
    //use fixed to display decimel instead of scientific
    
    return 0;
}




