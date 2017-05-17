#include "stdafx.h"
#pragma once

#include "ShipPosition.h"
#include "Ship.h"

class BattleShip : public Ship
{
public:
	BattleShip();
	BattleShip(int battleShipSize, int battleShipLp);
	BattleShip(ShipPosition position);

};