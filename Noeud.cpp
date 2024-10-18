// Programmeur: Dylane 
// Date: 17 octobre 2024
// Bût: Classe Noeud

#include "Noeud.h"

Noeud::Noeud(Point& p)
{
	setDonnee(p);
	//this->suivant = NULL;
	setSuivant(nullptr);
}

Noeud::~Noeud()
{
}

void Noeud::setDonnee(Point& p)
{
	this->donnee = p;
}

Point Noeud::getDonnee()
{
	return donnee;
}

void Noeud::setSuivant(Noeud* ptrNoeud)
{
	this->suivant = ptrNoeud;
}

Noeud* Noeud::getSuivant()
{
	return suivant;
}
