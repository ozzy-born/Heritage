// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "OctogoneRegulier.h"
#include "cercle.h"


void partie1()
{
	CTriangle triangle("Triangle_1", 10, 5);	// Creation d un triangle de base 5 et de hauteur 10
	CRectangle rectangle("Rectangle_1", 10, 5);	// Creation d un rectangle de longueur 10 et de largeur 5
	CCarre carre(5);							// Creation d un carre de cote 5
	COctogoneRegulier octogone("Octogone_1", 5);// Creation d un octogone regulier de cote 5

	triangle.afficher();	// Affichage du triangle
	triangle.surface();		// Appel de la methode surface() de la classe CTriangle
	rectangle.afficher();	// Affichage du rectangle
	rectangle.surface();	// Appel de la methode surface() de la classe CRectangle
	carre.afficher();		// Affichage du carre
	carre.surface();		// Appel de la methode surface() de la classe CCarre
	octogone.afficher();	// Affichage de l octogone regulier
	octogone.surface();		// Appel de la methode surface() de la classe COctogoneRegulier
}

void partie2_3() {
	CForme* mForme = new CRectangle("Rectangle_1", 10, 5);												// Creation d un rectangle de longueur 10 et de largeur 5 via un pointeur de la classe de base
	std::cout << "Surface du rectangle via pointeur sur forme : " << mForme->surface() << std::endl;	// Affichage de la surface du rectangle via le pointeur de la classe de base
}

void partie4() {
	//CForme forme("forme_abstraite");	//Compilation error : on ne peut pas instancier une classe abstraite
}
void partie5() {
	std::vector<CForme*> formes;								//Creation d'un vecteur de type CForme*
	formes.push_back(new CRectangle("Rectangle_1", 10, 5));		// Creation d un rectangle de longueur 10 et de largeur 5 dans le vecteur
	formes.push_back(new CCarre(5));							// Creation d un carre de cote 5 dans le vecteur
	formes.push_back(new CTriangle("Triangle_1", 10, 5));		// Creation d un triangle de base 5 et de hauteur 10 dans le vecteur
	formes.push_back(new COctogoneRegulier("Octogone_1", 5));	// Creation d un octogone regulier de cote 5 dans le vecteur

	for (int i = 0; i < formes.size(); i++) {
		formes[i]->afficher();	// Affichage de la forme à l'emplacement i du vecteur

	}
	
	for (int i = 0; i < formes.size(); i++) {
		delete formes[i];		//Liberation de la memoire
	}
}

void partie6() {
	CCarre caree(5);

	caree.afficher();		// Affichage du carre
	caree.surface();		// Appel de la methode surface() de la classe CCarre
}

void partie7() {
	std::vector<CForme*> formes;								//Creation d'un vecteur de type CForme*
	formes.push_back(new CRectangle("Rectangle_1", 10, 5));		// Creation d un rectangle de longueur 10 et de largeur 5 dans le vecteur
	formes.push_back(new CCarre(5));							// Creation d un carre de cote 5 dans le vecteur
	formes.push_back(new CTriangle("Triangle_1", 10, 5));		// Creation d un triangle de base 5 et de hauteur 10 dans le vecteur
	formes.push_back(new COctogoneRegulier("Octogone_1", 5));	// Creation d un octogone regulier de cote 5 dans le vecteur
	formes.push_back(new CCercle(5));							// Creation d'un cercle de rayon 5

	for (int i = 0; i < formes.size(); i++) {
		formes[i]->afficher();	// Affichage de la forme à l'emplacement i du vecteur

	}

	for (int i = 0; i < formes.size(); i++) {
		delete formes[i];		//Liberation de la memoire
	}
}

int main()
{

    std::cout << "Test des classes formes\n";
	
	//partie1();	// Test de la partie 1
	//partie2_3();	// Test de la partie 2 et 3
	//partie4();	// Test de la partie 4
	//partie5();	// Test de la partie 5
	//partie6();	// Test de la partie 6
	partie7();	// Test de la partie 7

	return 0;




}

