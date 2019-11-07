#include "CPoint.h"
#include <stdlib.h>

//constructeur
CPoint::CPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

//mutateur
void CPoint::Deplace(float dX, float dY)
{
	this->nX = nX + dX;
	this->nY = nY + dY;
}

//assesseurs
float CPoint::AfficheX()
{
	return nX;
}

float CPoint::AfficheY()
{
	return nY;
}