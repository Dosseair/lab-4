#include "Car.hpp"
#include <iostream>
#include <string>

Car::Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_) {
    setMake(make_);
    setModel(model_);
    setYear(year_);
    setMPG(MPG_);
    
    fuel_capacity = fuel_capacity_;
    mileage = 0.0;
    fuel_level = 0.0;
}

void Car::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << fuel_level << std::endl;
    std::cout << "Miles: " << mileage << std::endl;
}

double Car::getFuelLevel() const {
    return fuel_level;
}

void Car::drive(double distance) {
    double max_distance = fuel_level

    if (distance <= max_distance) {
        mileage += distance;
        fuel_level -= distance / mpg;

        std::cout << "Distance covered: " << distance << " miles\n";
        std::cout << "Remaining fuel: " << fuel_level << " gallons\n";
    }
    else {
        mileage += max_distance;
        fuel_level = 0;

        double miles_left = distance

        std::cout << "Ran out of fuel!\n";
        std::cout << "Distance covered: " << max_distance << " miles\n";
        std::cout << "Miles left: " << miles_left << "\n";
        std::cout << "Remaining fuel: " << fuel_level << " gallons\n";
    }
}

