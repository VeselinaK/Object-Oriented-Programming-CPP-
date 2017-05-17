#include "stdafx.h"
#pragma once
#include<iostream>
using namespace std;
#include "Ship.h"
#include "ShipPosition.h"

enum Direction
{
	Horizontal,
	Vertical,
};
enum Cell
{
	Hit = 'X',
	Missed = '@',
	Water = '~',
};
class Field
{
	int _field[10][10];
	Ship _ships [10][10];
public:

	void emptyField(Cell** field); 

	Ship** getShips() const;
	void setShips(Ship** ships);

	int** getField() const;
	void setField(int** field);

	Field(Ship** ships);
	Field();


	int getSize() const;

	Direction direction(int startX, int startY, int endX, int endY);

	bool relevantPosition(int startX, int startY, int endX, int endY, int size);
};
