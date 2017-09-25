
#pragma once

#include "stdafx.h"


using namespace std;

class Zoo
{
private:
	string Name;
	int Population;
	int Area;
public:
	string GetName() const
	{
		return Name;
	}
	int GetPopulation() const
	{
		return Population;
	}
	int GetArea() const
	{
		return Area;
	}
	string SetName(string NewName);
	int SetPopulation(int NewPopulation);
	int SetArea(int NewArea);
	bool operator < (const Zoo &zoo);
	
};

//bool operator < (const Zoo &zoo1, const Zoo &zoo2) {
//	return zoo1.GetPopulation() < zoo2.GetPopulation();
//}