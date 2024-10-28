#include "PuntDeInteresRestaurantSolucio.h"

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
	if (m_tipusCuina == "chinese")
		return 0xA6D9F7;
	
	else if (m_mobilitatReduida == "yes")
	{
		if (m_tipusCuina == "pizza")
			return 0x03FCBA;
		else
			return 0x251351;
	}
	
	else
		return PuntDeInteresBase::getColor();
}