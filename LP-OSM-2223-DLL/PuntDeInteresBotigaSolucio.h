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
	string getName() override { return m_name; }
	unsigned int getColor() override;
};		