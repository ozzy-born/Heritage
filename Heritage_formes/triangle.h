///////////////////////////////////////////////////////////
//  triangle.h
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#if !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
#define EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_

#include "forme.h"

/**
 * classe qui modelise un triangle qui est une forme donc un triangle sera
 * defini par son nom, sa hauteur et sa base
 */
class CTriangle : public CForme
{

public:
	CTriangle();
	virtual ~CTriangle();

	CTriangle(string nom, int _hauteur, int _base);	// Constructeur surcharge qui initialise le triangle avec son nom, sa hauteur et sa base
	virtual void afficher();						// Methode virtuelle pour afficher les caracteristiques de la forme
	virtual double surface();						// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * base du triangle en valeur entiere
	 */
	int base;
	/**
	 * hauteur du triangle en valeur entiere
	 */
	int hauteur;

};
#endif // !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
