// Programmeur: Dylane 
// Date: 17 octobre 2024
// Bût: Classe Noeud

#pragma once

#include "Point.h"

class Noeud
{
private:
	Point donnee;
	Noeud* suivant;

public:
	Noeud(Point& p);
	~Noeud();
	
	void setDonnee(Point& p);
	Point getDonnee();

	void setSuivant(Noeud* ptrNoeud);
	Noeud* getSuivant();


};

