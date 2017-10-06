// This program calculates miles per gallon (MPG)
// from inputs: total distance, total number of gallons
// a car can travel, that a car can hold.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    int intTotalDistance;
    int intTotalGallons;
    
    float fltTotalMPG;
    
    //Set decimal carry-over to single digit and
    //use fixed to display decimel instead of scientific
    cout << setprecision(1) << fixed << showpoint;
    
    // User input for total distance car can travel on one tank of gas + data validation
    cout << "Please enter the maximum distance your car can travel: " << endl;
    cin >> intTotalDistance;
    while(!cin || intTotalDistance < 0 || intTotalDistance > 1000)
    {
        cout << "Please enter a value between 0 and 1000 miles: " << endl;
        cin.clear();
        cin.ignore();
        cin >> intTotalDistance;
    }
    
    // User input for car's gas tank size in gallons + data validation
    cout << "Please enter the size of you gas tank in gallons: " << endl;
    cin >> intTotalGallons;
    while(!cin || intTotalGallons < 0 || intTotalGallons > 30)
    {
        cout << "Please enter a value between 0 and 30 gallons: " << endl;
        cin.clear();
        cin.ignore();
        cin >> intTotalGallons;
    }
    
    // Calculate MPG from given values
    fltTotalMPG = static_cast<float>(intTotalDistance) / static_cast<float>(intTotalGallons);
    
    // Output to console
    cout << "The MPG of your car is:\n" << fltTotalMPG << endl;
    
    return 0;
}




