#include "pointcol.h"

void pointcol::affiche()
{
	cout << "Coordonnées : " << getX() << " " << getY() << " Couleur : " << cl << "\n";
}

void pointcol::colore(int couleur)
{
	cl = couleur;
}


pointcol::pointcol(float abs, float ord, int couleur) :point(abs, ord)
{
	cl = couleur;
}