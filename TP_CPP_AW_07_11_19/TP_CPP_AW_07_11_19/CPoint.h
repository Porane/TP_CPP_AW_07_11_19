#pragma once

class CPoint
{

private :

	float nX;
	float nY;

public : 

	//constructeur
	CPoint(float nX, float nY);

	//mutateur
	void Deplace(float dX, float dY);

	//assesseurs
	float AfficheX();
	float AfficheY();

};