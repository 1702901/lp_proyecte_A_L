#pragma once
#include "MapaBase.h"
#ifndef PUNT_DE_INTERES_BASE_H // Si no está definida la macro
#define PUNT_DE_INTERES_BASE_H // Definir la macro
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"

class MapaSolucio : public MapaBase
{
private:
	std::vector<PuntDeInteresBase*> m_puntsDeInteres;

public:
	MapaSolucio() { 
		Coordinate coord1, coord2;
		coord1.lat = 41.4918606;
		coord1.lon = 2.1465411;
		coord2.lat = 41.4902204;
		coord2.lon = 2.1460477;

		m_puntsDeInteres.push_back(new PuntDeInteresBotigaSolucio("bakery", "", "", "La Millor Pastisseria", coord1)); 
		m_puntsDeInteres.push_back(new PuntDeInteresRestaurantSolucio("restaurant", "regional", "true", "yes", "El Millor Restaurant", coord2));
	}
	void getPdis(std::vector<PuntDeInteresBase*>&) override {

	}


};
#endif