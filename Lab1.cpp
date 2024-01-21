
#include <iostream>
using namespace std;

// Program to convert a Fahrenheit temperature to Celsius

int main()
{
    // declaration of variables
    double cel, fah;  // Change variables to double for more precise temperature values

    // print header
    cout << "Lab 1\nTemperature Conversion\nFahrenheit to Celsius\n\n";

    // collection of user input
    cout << "Enter Fahrenheit Temperature: ";
    cin >> fah;

    // calculation of temperature
    cel = (fah - 32.0) * 5.0 / 9.0;  // Use double values for more precise calculations

    // formatted output of results
    cout << endl << fah << " degrees Fahrenheit is equal to ";
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << cel << " degrees Celsius.\n";

    return 0;
}