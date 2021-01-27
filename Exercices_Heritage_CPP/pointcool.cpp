#include "pointcool.h"

void pointcool::affiche()
{
	cout << "Coordonnées : " << x << " " << y << " Couleur : " << cl << "\n";
}

void pointcool::colore(int couleur)
{
	cl = couleur;
}


pointcool::pointcool(float abs, float ord, int couleur)
{
	x = abs;
	y = ord;
	cl = couleur;
}