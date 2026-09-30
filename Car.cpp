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
<<<<<<< HEAD
    std::cout << "Fuel: " << fuel_level << std::endl;
    std::cout << "Miles: " << mileage << std::endl;
=======
	std::cout << "Miles: " << miles << std::endl;
>>>>>>> bb2298d0dd08957b3ffbe9815559e46ac9e76f0a
}

double Car::getFuelLevel() const {
    return fuel_level;
}