///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      20-janv.-2026 10:20:36
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#if !defined(EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_)
#define EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_

#include <string>
using namespace std;
#include <iostream>

/**
 * classe qui modelise une forme et donc sera
 * defini par son nom
 */

class CForme
{

public:
	CForme();
	~CForme();

	CForme(string _nom);			// constructeur surcharge qui initialise la forme avec son nom
	virtual void afficher();		// Methode virtuelle pour afficher les caracteristiques de la forme
	virtual double surface() = 0;	// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * nom de la forme pour l identifier. Ce nom sera affiche dans la methode affiche()
	 */
	string nom;

};
#endif // !defined(EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_)
