#include <iostream>
#include <string>

using namespace std;

class Transport
{
protected:

    string fuelType;

public:
    Transport(const string& fuel) : fuelType(fuel) {}

    virtual void PrintInfo() 
    {
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Car : public Transport 
{
public:
    Car() : Transport("Gasoline") {}

    void PrintInfo() override 
    {
        cout << "Car" << endl;
        Transport::PrintInfo();
    }
};

class Ship : public Transport
{
public:
    Ship() : Transport("Diesel") {}

    void PrintInfo() override 
    {
        cout << "Ship" << endl;
        Transport::PrintInfo();
    }
};

class Airplane : public Transport
{
public:
    Airplane() : Transport("Jet Fuel") {}

    void PrintInfo() override
    {
        cout << "Airplane" << endl;
        Transport::PrintInfo();
    }
};

class Tram : public Transport 
{
public:
    Tram() : Transport("Electricity") {}

    void PrintInfo() override 
    {
        cout << "Tram" << endl;
        Transport::PrintInfo();
    }
};

class Motorcycle : public Transport
{
public:
    Motorcycle() : Transport("Gasoline") {}

    void PrintInfo() override
    {
        cout << "Motorcycle" << endl;
        Transport::PrintInfo();
    }
};

int main()
{
    Transport* vehicles[] = { new Car(), new Ship(), new Airplane(), new Tram(), new Motorcycle() };

    for (int i = 0; i < 5; i++)
    {
        vehicles[i]->PrintInfo();
        delete vehicles[i];
    }

    return 0;
}