#include <iostream>
#include <cstdlib>
#include <cmath>
#include "CPoint.h"

using namespace std;

int main()
{
	//d�claration d'un point
	CPoint ptMonPoint(5.2, 3.4);

	//affichage
	std::cout << "X : " << ptMonPoint.AfficheX() << std::endl; 
	std::cout << "Y : " << ptMonPoint.AfficheY() << std::endl;

	//d�placement du point
	ptMonPoint.Deplace(2, 3);

	//affichage
	std::cout << "X : " << ptMonPoint.AfficheX() << std::endl;
	std::cout << "Y : " << ptMonPoint.AfficheY() << std::endl;

	system("pause");

	return 0;
}