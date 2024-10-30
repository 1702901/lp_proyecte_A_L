#pragma once
#include "CamiBase.h"

class CamiSolucio : public CamiBase
{
private:
	std::vector<Coordinate> m_coordenades;
	std::string m_highway;

public:
	//CamiSolucio() {}
	std::vector<Coordinate> getCamiCoords() override {
		return { {41.4928803, 2.1452381},
			{41.4929072, 2.1452474},
			{41.4933070, 2.1453852},
			{41.4939882, 2.1456419}
		};
	}
	
	/*
	CamiSolucio(std::vector<Coordinate> c) {
		for (auto it = c.begin(); it != c.end(); it++)
		{
			m_coordenades.push_back(*it);
		}
	}

	void afegeixCoordenada(const Coordinate& c) {
		m_coordenades.push_back(c);
	}*/
};