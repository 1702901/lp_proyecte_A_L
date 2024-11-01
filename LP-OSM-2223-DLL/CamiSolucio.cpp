#include "pch.h"
#include "CamiSolucio.h"


CamiSolucio::CamiSolucio(std::vector<Coordinate> coordenades,
	std::map<std::string, std::string> tags, const std::string& id) {
	m_id = id;
	m_tags = tags;
	for (const auto& nodeRef : coordenades)
		m_coordenades.push_back(nodeRef);
}

CamiSolucio::CamiSolucio(const CamiSolucio& copiar) {
	this->m_id = copiar.m_id;
	this->m_tags = copiar.m_tags;
	
	while (!m_coordenades.empty())
		this->m_coordenades.pop_back();
	this->m_coordenades.resize(copiar.m_coordenades.size());

	for (int i = 0; i < copiar.m_coordenades.size(); i++ )
		this->m_coordenades[i] =  copiar.m_coordenades[i];
}
