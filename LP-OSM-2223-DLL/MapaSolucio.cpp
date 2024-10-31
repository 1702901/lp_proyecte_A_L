#include "pch.h"
#include "MapaSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& a)  {
	a.resize(m_puntsDeInteres.size());
	for (int i = 0; i < m_puntsDeInteres.size(); i++)
		a[i] = new PuntDeInteresBase(*m_puntsDeInteres[i]);
}


void MapaSolucio::getCamins(std::vector<CamiBase*>& camins) {
	for (int i = 0; i < camins.size(); i++)
	{
		
	}
}

void MapaSolucio::afegeixCami(const XmlElement& cami) {
	/*
	std::vector<std::string> nodesRefs; //guardar referencies a nodes
	std::map<std::string, std::string> tags;
	//std::vector<Coordinate> coordenades;
	
	//AHORA QUE LOREPASO NO ACABA DE TENER SENTIO, 
	// PERO BN SE HIZO LO QUE SE PUDO

	for (const auto& child : cami.fills) {
		if (child.first == "nd") //es tracta d'una referencia al node
		{ 
			nodesRefs.push_back(child.second[1].second); 
		}
		else if (child.first == "tag")
		{
			tags[child.second[1].second] = child.second[2].second;
		}
	}
	//constructor sense acabar
	m_camins.push_back(new CamiSolucio(nodesRefs, tags, cami.atributs[1].second));
	*/
}

void MapaSolucio::afegeixNodeInteres(const XmlElement& node) {

}

void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements) {
	/* Si se ha de eliminar
	while(!m_puntsDeInteres.empty())
		m_puntsDeInteres.pop_back();
	while(!m_camins.empty())
		m_camins.pop_back();
	*/
	for (int i = 0; i < xmlElements.size(); i++)
	{
		if (xmlElements[i].id_element == "node") 
			afegeixNodeInteres(xmlElements[i]);
		
		else if(xmlElements[i].id_element == "way") 
			afegeixCami(xmlElements[i]);
	}
}

/*Coordinate MapaSolucio::obtenirCoordenadaPerNode(const std::string& nodeId) {
	auto it = m_camins.m_tags.find(nodeId);
	if (it != m_nodesCoordinates.end()) {
		return it->second; // Retorna les coordenades si s'ha trobat el node
	}
	else {
		// Retorna coordenades per defecte (potser un valor null o alguna cosa adequada)
		return { 0.0, 0.0 }; // Retorna coordenades buides o valors predeterminats
	}
}*/