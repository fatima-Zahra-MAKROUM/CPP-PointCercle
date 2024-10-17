#include "Cercle.h"
#include <iostream>
#include "Point.h"


const double Cercle::PI = 3.14;

Cercle::Cercle(int id, double rayon, Point p) :id(id), rayon(rayon), centre(p)
{
	//std::cout << "hi im const" << std::endl;

}

Cercle::Cercle(Cercle& c)
{
	this->id = c.id;
	this->rayon = c.rayon;
	this->centre = c.centre;
}


void Cercle::afficher() const
{
	std::cout << "id= " << this->id << std::endl;
	std::cout << "rayon= " << this->rayon << std::endl;
	this->centre.afficher();

}

Cercle::~Cercle()
{
	//std::cout << "hi im distr" << std::endl;
}

void Cercle::Modifier(double r)
{
	this->rayon = r;
}

double Cercle::Surface() const
{
	return (pow(this->rayon, 2) * PI);
}

double Cercle::Perimetre() const
{
	return (pow(this->rayon, 2));
}

bool Cercle::Egalit(const Cercle& c) const
{

	return (this->centre == c.centre && this->rayon == c.rayon);
}

bool Cercle::apartient(const Point& p) const
{
	return (this->centre.distance(p) == this->rayon);
}


