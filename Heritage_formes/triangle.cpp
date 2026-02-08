///////////////////////////////////////////////////////////
//  triangle.cpp
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "triangle.h"


CTriangle::CTriangle(){

}



CTriangle::~CTriangle(){

}


CTriangle::CTriangle(string nom, int _hauteur, int _base):
	CForme(nom),
	base(_base),
	hauteur(_hauteur)
{

}


void CTriangle::afficher(){
	std::cout << "Triangle de base : " << base << " et de hauteur : " << hauteur << std::endl;
	std::cout << "et de Surface : " << surface() << std::endl;
}


double CTriangle::surface(){

	return (hauteur * base) / 2;
}