#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
class VehicleStatus;
class OriginDetails;
class Bike;
class Car;
class Vehicle;

class Vehicle
{
private:
	string modelName; // name of vehicle
	string fuelType; // diesel or petrol
	string color;
	OriginDetails originDetails;
	VehicleStatus vehicleStatus;

public:
	Vehicle() {

	}
	~Vehicle() {

	}
	void setModelName(string modelName)
	{
		this->modelName = modelName;
	}
	string getModelName() {

	}
	void setFuelType(string fuelType);
	string getFuelType();
	void setColor(string color);
	string getColor();
	void setOriginDetails(OriginDetails	originDetails);
	OriginDetails getOriginDetails();
	void setVehicleStatus(VehicleStatus vehicleStatus);
	VehicleStatus getVehicleStatus();
	string toString();

};



class VehicleStatus
{
public:
	VehicleStatus();
	~VehicleStatus();

private:

};

VehicleStatus::VehicleStatus()
{
}

VehicleStatus::~VehicleStatus()
{
}





class OriginDetails
{
public:
	OriginDetails();

	~OriginDetails();

private:

};

OriginDetails::OriginDetails()
{
}

OriginDetails::~OriginDetails()
{
}

class Car {


};

class Bike
{
public:
	Bike();
	~Bike();

private:

};

Bike::Bike()
{
}

Bike::~Bike()
{
}