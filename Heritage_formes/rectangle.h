///////////////////////////////////////////////////////////
//  rectangle.h
//  Implementation of the Class CRetangle
//  Created on:      20-janv.-2026 10:20:43
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#if !defined(EA_E8659249_0B9C_491f_BC3B_764BEC26D8C9__INCLUDED_)
#define EA_E8659249_0B9C_491f_BC3B_764BEC26D8C9__INCLUDED_

#include "forme.h"

/**
 * classe qui modelise un rectangle qui est une forme donc un rectangle sera
 * defini par son nom, sa longueur et sa largeur
 */
class CRectangle : public CForme
{

public:
	CRectangle();
	CRectangle(string nom, int _largeur, int _longueur);	//Constructeur surcharge qui initialise le rectangle avec son nom, sa longueur et sa largeur
	virtual ~CRectangle();

	virtual void afficher();	// Methode virtuelle pour afficher les caracteristiques de la forme
	
	virtual double surface();	// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * largeur du rectangle en valeur entiere pour simplifier
	 */
	int largeur;
	/**
	 * longueur du rectangle en valeur entiere pour simplifier
	 */
	int longueur;

};
#endif // !defined(EA_E8659249_0B9C_491f_BC3B_764BEC26D8C9__INCLUDED_)
