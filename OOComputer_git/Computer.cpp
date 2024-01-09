#include "Computer.h"

Computer::Computer(string _name, float _frequency, int _OZU, bool _dvd, float _cost)
{
    name = _name;
    frequency = _frequency;
    OZU = _OZU;
    dvd = _dvd;
    cost = _cost;
}

int Computer::getOZU() const
{
    return OZU;
}

void Computer::show() const
{
    cout << "Name: " << name << endl;
    cout << "Frequency: " << frequency << endl;
    cout << "OZU: " << OZU << " Gb" << endl;
    cout << "DVD: " << dvd << endl;
    cout << "Cost: " << cost << " UAH" << endl;
}
