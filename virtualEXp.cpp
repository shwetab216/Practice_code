#include <iostream>
#include <memory>
#include <vector>

class Vehicle
{
public:
    virtual void startEngine() const = 0;
    virtual void move() const = 0;
    virtual ~Vehicle() = default;

};

class Car : public Vehicle
{
public:
    void startEngine() const override
    {
        std::cout << "Car engine starts with a key.\n";
    }

    void move() const override
    {
        std::cout << "Car moves on four wheels.\n";
    }
};

class Bike : public Vehicle
{
public:
    void startEngine() const override
    {
        std::cout << "Bike engine starts with a button.\n";
    }

    void move() const override
    {
        std::cout << "Bike moves on two wheels.\n";
    }

};

int main()
{
    std::vector<std::unique_ptr<Vehicle>> vehicles;
    vehicles.emplace_back(std::make_unique<Car>());
    vehicles.emplace_back(std::make_unique<Bike>());
    
    for (const auto& vehicle : vehicles)
    {
        vehicle->startEngine();
        vehicle->move();
    }

    return 0;



   
}