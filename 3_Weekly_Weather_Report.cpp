#include <iostream>
using namespace std;

struct CityWeather {
    char cityName[50];
    float temps[7];
};

int main() {
    CityWeather weather;
    
    cout << "Enter city name: ";
    cin.ignore();
    cin.getline(weather.cityName, 50);
    
    cout << "Enter temperatures for 7 days:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> weather.temps[i];
    }
    
    float highest = weather.temps[0];
    for (int i = 1; i < 7; i++) {
        if (weather.temps[i] > highest) {
            highest = weather.temps[i];
        }
    }
    
    cout << " Weekly Weather Report " << endl;
    cout << "City: " << weather.cityName << endl;
    cout << "Highest Temperature: " << highest << " degrees" << endl;
    
    return 0;
}
