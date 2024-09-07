#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature, convertedTemperature;

    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << convertedTemperature << " F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << convertedTemperature << " C" << endl;
    } else {
        cout << "Invalid choice. Please run the program again." << endl;
    }

    return 0;
}
