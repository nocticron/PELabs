
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
	string GetName() const;
	int GetPopulation() const;
	int GetArea() const;
	string SetName(string NewName);
	int SetPopulation(int NewPopulation);
	int SetArea(int NewArea);
};

