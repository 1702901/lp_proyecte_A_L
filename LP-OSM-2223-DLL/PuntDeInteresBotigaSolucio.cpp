#include "pch.h"
#include "PuntDeInteresBotigaSolucio.h"


unsigned int PuntDeInteresBotigaSolucio::getColor() {
		if (m_shop == "supermarket")
			return 0xA5BE00;

		else if (m_shop == "tobacco")
			return 0xFFAD69;
		
		else if (m_shop == "backery")
			return 0xE85D75;
		
		else if (m_shop == "backery" && m_opening_hours == "06:00-22:00"
			&& m_wheelchair == "yes")
			return 0x4CB944;
		
		else
			return 0xEFD6AC;
}
