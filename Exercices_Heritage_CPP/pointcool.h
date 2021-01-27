#pragma once
#include <iostream>

using namespace std;

class pointcool
{
	int cl;
	float x, y;
public:
	void affiche();
	void colore(int couleur);

	pointcool(float abs, float ord, int couleur);
};