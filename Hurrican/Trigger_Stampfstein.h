#ifndef _TRIGGER_STAMPFSTEIN_H_
#define _TRIGGER_STAMPFSTEIN_H_

#include "GegnerClass.h"
#include "Gegner_Stuff.h"

class GegnerStampfstein : public GegnerClass
{
	private:
		float	oldy;

	public:

	GegnerStampfstein	   (int Wert1,	int Wert2,			// Konstruktor
						bool		  Light);	
	void GegnerExplode (void);							// Gegner explodiert
	void DoKI		   (void);							// Gegner individuell mit seiner 
														// eigenen kleinen KI bewegen
	void DoDraw			(void);
};

#endif