#include "CPoint.h"
#include <stdlib.h>

CPoint::CPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

void CPoint::Deplace(float dX, float dY)
{
	this->nX = nX + dX;
	this->nY = nY + dY;
}

float CPoint::AfficheX()
{
	return nX;
}

float CPoint::AfficheY()
{
	return nY;
}