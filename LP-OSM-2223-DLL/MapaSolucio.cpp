#include "pch.h"
#include "MapaSolucio.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& a)  {
	for (int i = 0; i < m_puntsDeInteres.size(); i++)
		a[i] = m_puntsDeInteres[i];
}


void MapaSolucio::getCamins(std::vector<CamiBase*>& camins) {
	for (int i = 0; i < camins.size(); i++)
	{
		
	}
}

void MapaSolucio::afegeixCami(const XmlElement& cami) {

}

void MapaSolucio::afegeixNodeInteres(const XmlElement& node) {

}



void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements) {
	for (int i = 0; i < xmlElements.size(); i++)
	{
		if (xmlElements[i].id_element == "node") 
			afegeixNodeInteres(xmlElements[i]);
		else if(xmlElements[i].id_element == "way") 
			afegeixCami(xmlElements[i]);
	}
}