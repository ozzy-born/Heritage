///////////////////////////////////////////////////////////
//  OctogoneRegulier.h
//  Implementation of the Class OctogoneRegulier
//  Created on:      20-janv.-2026 10:20:48
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#if !defined(EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_)
#define EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_

#include "forme.h"
#include <math.h>

/**
 * classe qui modelise un octogone regulier qui est une forme donc un octogone reguliser sera
 * defini par son nom et son cote
 */

class COctogoneRegulier : public CForme
{

public:
	COctogoneRegulier();
	virtual ~COctogoneRegulier();

	virtual void afficher();					// Methode virtuelle pour afficher les caracteristiques de la forme
	COctogoneRegulier(string _nom, int _cote);	// Constructeur surcharge qui initialise l octogone regulier avec son nom et son cote
	virtual double surface();					// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * cote de l orctogone regulier en valeur entiere
	 */
	int cote;

};
#endif // !defined(EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_)
