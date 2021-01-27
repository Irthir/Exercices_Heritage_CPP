#include <iostream>
#include "pointcol.h"
#include "pointcool.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.

	//Exercice 103
	pointcol pc(2.5, 3.25, 5);
	pc.affiche();
	pc.deplace(2.5, 2.5);
	pc.affiche();

	//Exercice 104
	pointcool cool(3.9,9.3,7);
	cool.affiche();
	//Dans notre nouvelle classe pointcool ne dérivant pas de la classe point, nous n'avons pas accès à la fonction deplace de la classe point.
	cout<< "Dans notre nouvelle classe pointcool ne dérivant pas de la classe point, nous n'avons pas accès à la fonction deplace de la classe point." <<endl;

	return 0;
}