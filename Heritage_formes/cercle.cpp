///////////////////////////////////////////////////////////
//  carre.h
//  Implementation of the Class CCarre
//  Created on:      09-fevr.-2026 00:32:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "cercle.h"


CCercle::CCercle() {

}


CCercle::CCercle(double _rayon) :
	rayon(_rayon)
{

}


CCercle::~CCercle() {

}


/**
 * affiche le rayon et la surface du cercle
 */
void CCercle::afficher() {
	std::cout << "Cercle de rayon " << rayon << std::endl;
	std::cout << "et de Surface : " << surface() << std::endl;

}



/**
 * retourne la surface du cercle
 */
double CCercle::surface() {
	double pi = 3.14159;
	return pi * rayon * rayon;
}