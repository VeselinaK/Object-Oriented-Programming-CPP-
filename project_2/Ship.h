#include "stdafx.h"
#pragma once

#include "ShipPosition.h"
#include <iostream>
using namespace std;

class Ship
{
	ShipPosition _position;
	int _lp;
	int _size;
public:
	Ship();
	Ship(ShipPosition position, int lp, int size);
	//Ship(ShipPosition position);

	const ShipPosition& getPosition() const;
	void setPosition(const ShipPosition& position);

	int getLp() const;
	void setLp(int lp);

	int getSize() const;
	void setSize(int size);

	int lpLeft(int lp); 

};

