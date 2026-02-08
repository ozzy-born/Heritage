///////////////////////////////////////////////////////////
//  carre.h
//  Implementation of the Class CCarre
//  Created on:      09-fevr.-2026 00:22:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include "forme.h"

/**
 * classe qui modelise un cercle qui est une forme donc un cercle sera
 * defini par son rayon
 */
class CCercle : public CForme
{

public:
	CCercle();
	virtual ~CCercle();

	CCercle(double _rayon);		//constructeur surcharge qui initialise cercle avec son rayon
	virtual void afficher();	// Methode virtuelle pour afficher les caracteristiques de la forme
	virtual double surface();	// Methode virtuelle pour calculer la surface de la forme

private:
	/**
	 * rayon du cercle en valeur entiere
	 */
	double rayon;

};
