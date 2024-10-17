#pragma once
#include "Point.h"

class Cercle
{
private:
	int id;
	Point centre;
	double rayon;
	const static double PI;
public:
	Cercle(int id = 0, double rayon = 0.0, Point centre = Point());
	Cercle(Cercle&);
	void afficher() const;
	~Cercle();
	void Modifier(double r);//modification de rayon du cercle
	double Surface() const;
	double Perimetre() const;
	bool Egalit(const Cercle&) const;//egalité de deux cercle
	bool apartient(const Point&)const;



};