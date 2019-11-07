#include <iostream>
#include <cstdlib>
#include <cmath>
#include "CPoint.h"

using namespace std;
//déclarant un point, l'affichant, le déplacant et l'affichant à nouveau
int main()
{
	CPoint ptMonPoint(5.2, 3.4);

	std::cout << "X : " << ptMonPoint.AfficheX() << std::endl;
	std::cout << "Y : " << ptMonPoint.AfficheY() << std::endl;

	ptMonPoint.Deplace(2, 3);

	std::cout << "X : " << ptMonPoint.AfficheX() << std::endl;
	std::cout << "Y : " << ptMonPoint.AfficheY() << std::endl;

	system("pause");

	return 0;
}