#pragma once
#include "CamiBase.h"
#include <map>

class CamiSolucio : public CamiBase
{
private:
	std::vector<Coordinate> m_coordenades;
	std::string m_id;
	std::map<std::string, std::string> m_tags;

public:
	//CamiSolucio() {}
	std::vector<Coordinate> getCamiCoords() override {
		/*return {{41.4928803, 2.1452381},
			{41.4929072, 2.1452474},
			{41.4933070, 2.1453852},
			{41.4939882, 2.1456419}
		};*/
		return m_coordenades;
	}
	CamiSolucio(const CamiSolucio& copiar);
	CamiSolucio* clone() override { return new CamiSolucio(*this); };
	CamiSolucio(std::vector<Coordinate> coordenades,
		std::map<std::string, std::string> tags, const std::string& id);
		//nodesRefs, tags, cami.atributs[1].second
	
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