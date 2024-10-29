#pragma once
#include <string>
#include "PuntDeInteresBase.h"
using namespace std;
class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
private:
	string m_tipusCuina;
	string m_mobilitatReduida;
public:
	unsigned int getColor() override;
	string getName() override { return m_name; }
};