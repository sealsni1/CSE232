#include <iostream>

class Temperature {

    double temp_k;

    public:
        Temperature (double value, char unit){
        switch(unit){
            case 'K':
                temp_k = value; // Kelvin default value
                break;
            case 'C':
                temp_k = value + 273.15; // Celcius Conversion
                break;
            case 'F':
                temp_k = (value - 32) * (5.0 / 9.0) + 273.15; // Fahrenheit Conversion
                break;
            case 'R':
                temp_k = value * (5.0 / 9.0); // Rankine Conversion
                break;
            default:
                throw std::out_of_range("Unexpected Unit"); // CPPReference
            }
        }

        double Ascelcius(){ return temp_k + 273.15; } // Revert C back
        double AsFahrenheit() { return (temp_k - 273.15) * (9.0 / 5.0) + 32; } // Revert F back
        double AsKelvin() {return temp_k; } // Default value
        double AsRankine() {return temp_k * (9.0 / 5.0); } // Revert R back
}