#include "stdafx.h"
#include "Ship.h"

Ship::Ship() 
{
	int size = 0;
	int lp = 0;
}

Ship::Ship(ShipPosition position, int lp, int size)
{
	_position = position;
	_lp = lp;
	_size = size;
}

const ShipPosition& Ship::getPosition() const 
{
	return _position;
}
void Ship::setPosition(const ShipPosition& position) 
{
	this->_position = position; 
}

int Ship::getLp() const 
{
	return _lp; 
}
void Ship::setLp(int lp) 
{
	this->_lp = lp;
}

int Ship::getSize() const
{
	return _size; 
}
void Ship::setSize(int size) 
{
	this->_size = size; 
}

int lpLeft(int lp) //това трябва да намава животите и корабът да потъва, когато станат 0
{
}


