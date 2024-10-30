#pragma once
#include <string>
#include "PuntDeInteresBase.h"
using namespace std;
class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
private:
	string m_tipusCuina;
	string m_mobilitatReduida;
	string m_amenity;
public:
	PuntDeInteresRestaurantSolucio() : PuntDeInteresBase::PuntDeInteresBase(), m_tipusCuina(""), m_mobilitatReduida(""), m_amenity("") {}
	PuntDeInteresRestaurantSolucio(const string& amenity, const string& cuina, const string& mobilitat, const string& nom, const Coordinate& coordenades) :
		PuntDeInteresBase::PuntDeInteresBase(coordenades, nom), m_tipusCuina(cuina), m_mobilitatReduida(mobilitat), m_amenity(amenity) {}
	unsigned int getColor() override;
	string getName() override { return m_name; }
};