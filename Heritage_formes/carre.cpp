///////////////////////////////////////////////////////////
//  carre.cpp
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "carre.h"


CCarre::CCarre(){

}



CCarre::~CCarre(){

}


CCarre::CCarre(int _cote):
	cote(_cote)
{

}


void CCarre::afficher(){
	std::cout << "Carre de cote : " << cote << std::endl;
	std::cout << "et de Surface : " << surface() << std::endl;
}

double CCarre::surface(){

	return cote * cote;
}