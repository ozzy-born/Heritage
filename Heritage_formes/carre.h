///////////////////////////////////////////////////////////
//  carre.h
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#if !defined(EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_)
#define EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_

#include "rectangle.h"

/**
 * classe qui modelise un caree qui est un rectangle donc un caree sera
 * defini par son cote
 */

class CCarre : public CRectangle
{

public:
	CCarre();
	virtual ~CCarre();

	CCarre(int _cote);			//constructeur surcharge qui initialise carre avec son cote
	virtual void afficher();	// Methode virtuelle pour afficher les caracteristiques de la forme
	//virtual double surface();	// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * cote du caree en valeur entiere
	 */
	int cote;

};
#endif // !defined(EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_)
