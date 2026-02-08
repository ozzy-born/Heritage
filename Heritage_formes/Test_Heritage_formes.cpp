// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>7
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "OctogoneRegulier.h"

// fonctions de test à coder
void partie1();
void partie2();
/// etc...

int main()
{
	
    std::cout << "Test des classes formes\n";

	CTriangle triangle("Triangle_1", 10, 5);	// Creation d un triangle de base 5 et de hauteur 10
	CRectangle rectangle("Rectangle_1", 10, 5);	// Creation d un rectangle de longueur 10 et de largeur 5
	CCarre carre(5);							// Creation d un carre de cote 5
	COctogoneRegulier octogone("Octogone_1", 5);// Creation d un octogone regulier de cote 5

	triangle.afficher();	// Affichage du triangle
	triangle.surface();		// Affichage de la surface du triangle
	rectangle.afficher();	// Affichage du rectangle
	rectangle.surface();	// Affichage de la surface du rectangle
	carre.afficher();		// Affichage du carre
	carre.surface();		// Affichage de la surface du carre
	octogone.afficher();	// Affichage de l octogone regulier
	octogone.surface();		// Affichage de la surface de l octogone regulier
	return 0;

}

