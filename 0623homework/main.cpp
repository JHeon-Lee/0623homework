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
			cout << "�̵� ���� ��ü ���� 5�� �ʰ��մϴ�, ���� ��ü �� : " << instanceCount << endl;
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
		cout << "����� �̵�" << endl;
	}
};

class Car : public Vehicle
{
public:
	Car(const string& name) : Vehicle(name) {}

	void movement() const override
	{
		cout << "�� �̵�" << endl;
	}
};

class Ship : public Vehicle
{
public:
	Ship(const string& name) : Vehicle(name) {}

	void movement() const override
	{
		cout << "�� �̵�" << endl;
	}
};

int main()
{
	Airplane airplane1("�����1");
	Airplane airplane2("�����2");
	Car car1("��1");
	Car car2("��2");
	Ship ship1("��1");
	Ship ship2("��2");
	Ship ship3("��3");

	cout << endl;

	airplane1.movement();
	car1.movement();
	ship1.movement();

	return 0;
}