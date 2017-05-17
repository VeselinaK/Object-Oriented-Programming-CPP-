#include "stdafx.h"
#include "BattleShip.h"


BattleShip::BattleShip() : Ship() 
{
	setLp(BattleShipLp);
}


class Student : public Person
{
public:
	Student(const char* pszName, const char* pszEGN, Gender eGender, const char* pszFn)
		: Person(pszName, pszEGN, eGender), fn(nullptr)
	{
		SetFN(pszFn);
	}