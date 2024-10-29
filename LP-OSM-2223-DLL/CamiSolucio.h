#pragma once
#include "CamiBase.h"

class CamiSolucio : public CamiBase
{
private:
	std::vector<Coordinate> m_coordenades;

public:
	CamiSolucio() {}
	CamiSolucio(std::vector<Coordinate> c) {
		for (auto it = c.begin(); it != c.end(); it++)
		{
			m_coordenades.push_back(*it);
		}
	}

	std::vector<Coordinate> getCamiCoords() override {
		return m_coordenades;
	}

	void afegeixCoordenada(const Coordinate& c) {
		m_coordenades.push_back(c);
	}
};