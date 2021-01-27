#pragma once
#include "point.h"

class pointcol:public point
{
	int cl;
public:
	void affiche();
	void colore(int couleur);

	pointcol(float abs, float ord, int couleur);
};