#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int instanceCount = 0;

class Vehicle abstract
{
public:
	Vehicle(const string& name)
		:name(name)
	{
		instanceCount++;
		if (instanceCount > 5)
			cout << "이동 수단 개체 수가 5를 초과합니다, 현재 개체 수 : " << instanceCount << endl;
	}

	virtual void movement() const abstract = 0;
private:
	string name;
};

class Airplane : public Vehicle
{
public:
	Airplane(const string& name) : Vehicle(name) {}

	void movement() const override
	{
		cout << "비행기 이동" << endl;
	}
};

class Car : public Vehicle
{
public:
	Car(const string& name) : Vehicle(name) {}

	void movement() const override
	{
		cout << "차 이동" << endl;
	}
};

class Ship : public Vehicle
{
public:
	Ship(const string& name) : Vehicle(name) {}

	void movement() const override
	{
		cout << "배 이동" << endl;
	}
};

int main()
{
	Airplane airplane1("비행기1");
	Airplane airplane2("비행기2");
	Car car1("차1");
	Car car2("차2");
	Ship ship1("배1");
	Ship ship2("배2");
	Ship ship3("배3");

	cout << endl;

	airplane1.movement();
	car1.movement();
	ship1.movement();

	return 0;
}