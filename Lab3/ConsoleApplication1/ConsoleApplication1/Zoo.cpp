#include "stdafx.h"

#include "Zoo.h"

string Zoo::SetName(string NewName)
{
	Name = NewName;
	return Name;
}
//---------------------------------------------------------------------------

int Zoo::SetPopulation(int NewPopulation)
{
//	if (NewPopulation < 0)
//		throw ENegativeAmount();
	Population = NewPopulation;
	return Population;
}
//---------------------------------------------------------------------------

int Zoo::SetArea(int NewArea)
{
//	if (Area <= 0)
//		throw ENegativeAmount();
	Area = NewArea;
	return Area;
}
//---------------------------------------------------------------------------

bool Zoo::operator < (const Zoo &zoo) {
	return Population < zoo.GetPopulation();
}