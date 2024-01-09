#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer
{
protected:
	string name;
	float frequency;
	int OZU;
	bool dvd;
	float cost;
public:
	Computer(string _name, float _frequency, int _OZU, bool _dvd, float _cost);

	int getOZU() const;
	void show() const;
};

