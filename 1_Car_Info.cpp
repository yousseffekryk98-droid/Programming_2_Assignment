#include <iostream>
using namespace std;

struct Car {
    char brand[50];
    char model[50];
    int year;
    double price;
};

int main() {
    Car car;
    
    cout << "Enter car brand: ";
    cin >> car.brand;
    
    cout << "Enter car model: ";
    cin >> car.model;
    
    cout << "Enter car year: ";
    cin >> car.year;
    
    cout << "Enter car price: ";
    cin >> car.price;
    
    cout << " Car Information " << endl;
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Price: " << car.price << endl;
    
    return 0;
}
