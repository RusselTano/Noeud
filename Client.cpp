// Programmeur: Dylane 
// Date: 17 octobre 2024
// Bût: Classe Noeud

#include "Noeud.h"

int main() {

	//Creation de 3 points
	Point p1(2, 3);
	Point p2(5, 7);
	Point p3(1, 4);


	//Creation de 3 Noeuds
	Noeud n1(p1);
	Noeud n2(p2);
	Noeud n3(p3);

	//On relie les noeuds entre eux
	n1.setSuivant(&n2);
	n2.setSuivant(&n3);

	Noeud* courant = &n1;
	//Parcourir les noeuds a l'aide d'une boocle
	while (courant != nullptr) {
		courant->getDonnee().afficher(); // Affiche le point du noeud courant
		courant = courant->getSuivant(); // Passer au noeud suivant
	}
}