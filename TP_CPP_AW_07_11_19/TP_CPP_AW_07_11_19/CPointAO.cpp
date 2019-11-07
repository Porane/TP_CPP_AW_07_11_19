#include "CPointAO.h"
#include <stdlib.h>

//constructeur
CPointAO::CPointAO(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

//mutateur
void CPointAO::Deplace(float dX, float dY)
{
	this->nX = nX + dX;
	this->nY = nY + dY;
}

//assesseurs
float CPointAO::abscisse()
{
	return nX;
}

float CPointAO::ordonnee()
{
	return nY;
}