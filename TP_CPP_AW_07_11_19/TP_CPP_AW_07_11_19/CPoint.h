#pragma once

class CPoint
{

private : //membres priv�s

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