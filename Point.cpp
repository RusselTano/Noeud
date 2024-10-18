// Programmeur: Dylane 
// Date: 4 octobre 2024
// Bût: Devoir 2 - Classe Point

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int pX, int pY)
{
	x = pX;
	y = pY;
}

Point::~Point()
{
	//cout << "Boom";
}

int Point::getX() const
{
	return x;
}

void Point::setX(int pX)
{
	x = pX;
}

int Point::getY() const
{
	return y;
}

void Point::setY(int pY)
{
	y = pY;
}

bool Point::isEqual(const Point& p)const
{
	return ((this->x == p.x) && (this->y == p.y));
}

void Point::move(int pX, int pY)
{
	this->x += pX;
	this->y += pY;
}

void Point::move(const Point& p)
{
	this->x += p.x;
	this->y += p.y;
}

void Point::setLocation(int pX, int pY)
{
	this->x = pX;
	this->y = pY;
}

void Point::setLocation(const Point& p)
{
	this->x = p.x;
	this->y = p.y;
}

bool Point::isOrigin()const
{
	return (this->x == 0 && this->y == 0);
}

void Point::afficher()const
{
	cout << "(" << x << "," << y << ")";
	cout << endl;
}

double Point::distance(const Point& p)const
{
	return sqrt(pow((p.x - this->x), 2) + pow((p.y - this->y), 2));
}

double Point::distance(int pX, int pY)const
{
	return sqrt(pow((pX - this->x), 2) + pow((pY - this->y), 2));
}

//int Point::methodeStatique()
//{
//	//return Point::proprieteStatique;
//}

