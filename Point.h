// Programmeur: Dylane 
// Date: 4 octobre 2024
// Bût: Devoir 2 - Classe Point

#pragma once
using namespace std;
#include <iostream>
class Point
{
private:
	int x;
	int y;

	//static int proprieteStatique; //Propriete statique
public:
	Point();
	Point(int pX, int pY);
	~Point();

	//const static int AXEX_MAX; //Constante static public

	int getX() const ;
	void setX(int pX);

	int getY() const;
	void setY(int pY);

	bool isEqual(const Point& p)const;
	void move(int pX, int pY);
	void move(const Point& p);
	void setLocation(int pX, int pY);
	void setLocation(const Point& p);
	bool isOrigin()const;
	void afficher()const;
	double distance(const Point& p)const;
	double distance(int pX, int pY)const;

	//static int methodeStatique();
};

