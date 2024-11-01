#include "pch.h"
#include "MapaSolucio.h"
#include "CamiSolucio.h"



std::string serchAtribut(const std::string& nameAtribut, const std::vector<PAIR_ATTR_VALUE>& nodeAtr) {
	std::vector<PAIR_ATTR_VALUE>::const_iterator iterador = nodeAtr.begin();
	while (iterador != nodeAtr.end())
	{
		if (iterador->first == nameAtribut)
			return iterador->second;
		iterador++;
	}
	// no troba dada
	return "";
}

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& puntsDeInteres)  {
	puntsDeInteres.resize(m_puntsDeInteres.size());
	for (int i = 0; i < m_puntsDeInteres.size(); i++)
		puntsDeInteres[i] = new PuntDeInteresBase(*m_puntsDeInteres[i]);
}


void MapaSolucio::getCamins(std::vector<CamiBase*>& camins) {


	camins.resize(m_camins.size());
	
	for (int cami = 0; cami < m_camins.size(); cami++)
		camins[cami] = m_camins[cami]->clone();
}

void MapaSolucio::afegeixCami(const XmlElement& cami, unordered_map<string, Coordinate>& way_node) {
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

void MapaSolucio::selectNodes(const XmlElement& node, unordered_map<string, Coordinate>& way_node) {
	static const string NODE_CAMI = "";
	string nom = serchAtribut("name", node.atributs);
	Coordinate novaCoordenada;
	novaCoordenada.lat = stod(serchAtribut("lat", node.atributs));
	novaCoordenada.lon = stod(serchAtribut("lon", node.atributs));
	if (nom == NODE_CAMI) // SUPOSEM QUE UN NODE DE INTERES NO POT FORMAR PART DEL CAMI 
		way_node.insert( pair<string, Coordinate>(serchAtribut("id", node.atributs), novaCoordenada) );
	else
		m_puntsDeInteres.push_back( new PuntDeInteresBase(novaCoordenada, nom) );
}

void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements) {
	
	// Eliminar anteriors dades
	while(!m_puntsDeInteres.empty())
		m_puntsDeInteres.pop_back();
	while(!m_camins.empty())
		m_camins.pop_back();

	// calcular el tamany del hash
	unordered_map<string, Coordinate> way_node;
	way_node.rehash(xmlElements.size()*2); // al no ser tots els xmlElements nodes sino ways estarem a un factor de treball < 0.5
	m_puntsDeInteres.resize(xmlElements.size() / 16); // al no poder saber el tamany de nodes que son de interes supossem que nomes 1 / 16 nodes son de interes
	
	for (int i = 0; i < xmlElements.size(); i++)
	{
		if (xmlElements[i].id_element == "node") 
			selectNodes(xmlElements[i], way_node);
		else if(xmlElements[i].id_element == "way") 
			afegeixCami(xmlElements[i], way_node);
	}

	// SI NO HI HA CAP ELEMENT HEM DE AFEGIR UNS ESTANDARD AQUI QUE SINO PETA 
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