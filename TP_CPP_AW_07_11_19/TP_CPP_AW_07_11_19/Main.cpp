#include <iostream>
#include <cstdlib>
#include <cmath>
#include "CPoint.h"
#include "CPointAO.h"

using namespace std;

int main()
{
	//déclaration d'un point
	CPointAO ptMonPoint(5.2, 3.4);

	//affichage
	std::cout << "X : " << ptMonPoint.abscisse() << std::endl; 
	std::cout << "Y : " << ptMonPoint.ordonnee() << std::endl;

	//déplacement du point
	ptMonPoint.Deplace(2, 3);

	//affichage
	std::cout << "X : " << ptMonPoint.abscisse() << std::endl;
	std::cout << "Y : " << ptMonPoint.ordonnee() << std::endl;

	ptMonPoint.homothetie(5);

	std::cout << "X : " << ptMonPoint.abscisse() << std::endl;
	std::cout << "Y : " << ptMonPoint.ordonnee() << std::endl;

	system("pause");

	return 0;
}