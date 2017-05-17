#include "stdafx.h"
#include "Field.h"


void emptyField(Cell** _field)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			_field [i][j] = Water;
		}
	}
}

/*Ship** Field::getShips() const
{ 
	return _ships; 
}

int** Field::getField() const { return _field; }

void Field::setField(int** _field, int _size)
{
	_field = field;
	_size = size;
}*/
Direction direction(int startX, int startY, int endX, int endY)
{
	if (startX == endX)
	{
		return Horizontal;
	}
	else if (startY == endY)
	{
		return Vertical;
	}
}
bool relevantPosition(int startX, int startY, int endX, int endY, int size) 
{
	if (startX != endX || startY != endY)
	{
		return false;
	}
	if (endX + endY - startX - startY != size)
	{
		return false;
	}
}

//липсват доста неща, не съм измислила още как трябва да става това със стрелянето и после с презареждането на полето