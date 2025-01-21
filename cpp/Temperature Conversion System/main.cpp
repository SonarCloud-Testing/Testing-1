#include <iostream>
#include <string_view>
using namespace std;

class TemperatureConverter {
public:
    static double toCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5/9;
    }

    static double toFahrenheit(double celsius) {
        return (celsius * 9/5) + 32;
    }

    static double convertTemperature(double temp, std::string_view unit) {
        if (unit == "C") {
            return toFahrenheit(temp);
        } else if (unit == "F") {
            return toCelsius(temp);
        } else {
            cout << "Invalid unit!" << endl;
            return -1;  // Invalid value returned
        }
    }
};

int main() {
    double temperature;
    string unit;
    cout << "Enter temperature and unit (C or F): ";
    cin >> temperature >> unit;
    
    double result = TemperatureConverter::convertTemperature(temperature, unit);
    cout << "Converted temperature: " << result << endl;

    return 0;
}