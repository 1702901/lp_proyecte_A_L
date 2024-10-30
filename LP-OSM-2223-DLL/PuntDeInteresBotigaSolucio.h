#pragma once
#include <string>
#include "PuntDeInteresBase.h"
using namespace std;

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{
private:
	string m_shop;
	string m_opening_hours;
	string m_wheelchair;

public:
	PuntDeInteresBotigaSolucio() : PuntDeInteresBase::PuntDeInteresBase(), m_shop(""), m_opening_hours(""), m_wheelchair("") {}
	PuntDeInteresBotigaSolucio(const string& shop, const string& hours, const string& wheelchair, const string& nom, const Coordinate& coordenades) :
		PuntDeInteresBase::PuntDeInteresBase(coordenades, nom), m_shop(shop), m_opening_hours(hours), m_wheelchair(wheelchair) {}

	string getName() override { return m_name; }
	unsigned int getColor() override;
};		