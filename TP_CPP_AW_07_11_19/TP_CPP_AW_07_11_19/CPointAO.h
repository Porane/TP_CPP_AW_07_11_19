#pragma once

class CPointAO
{

private:

	float nX;
	float nY;

public:

	//constructeur
	CPointAO(float nX, float nY);

	//mutateur
	void Deplace(float dX, float dY);

	//assesseurs
	float abscisse();
	float ordonnee();

};