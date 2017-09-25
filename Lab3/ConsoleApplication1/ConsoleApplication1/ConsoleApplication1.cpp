// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Zoo.h"
#include <fstream>

void list_input(list<Zoo> &ZooList, char* fname);
void list_output(list<Zoo> &ZooList, char* fname);

int main(int argc, char* argv[])
{
	if (argc = 1) { return 1; }
	
	list<Zoo> ZooList;
	list_input(ZooList, argv[1]);

//searching population maximum with lambda expression
//SYNTAX:
//[ capture ] ( params ) attribute -> ret { body }		


/*	int pmax = 0;
	pmax= [](list<Zoo> &ZooList)->int {

		int max = 0;
		list<Zoo>::iterator i;
		for (i = ZooList.begin(); i != ZooList.end(); ++i) {
			if ((*i).GetPopulation() > max) { max = (*i).GetPopulation(); }
		}
		return max;
	};
*/

//sorting by area/population, using sort from <algorithm>
//lambda-based comparator

	ZooList.sort([](Zoo& zoo1, Zoo& zoo2) {	
		return 	((double)zoo1.GetArea() / zoo1.GetPopulation()) >
				((double)zoo2.GetArea() / zoo2.GetPopulation());});
		
	list_output(ZooList, argv[2]);
	return 0;
}


//input from file

void list_input(list<Zoo> &ZooList, char* fname)
{
	int n=0;
	ifstream f(fname, ios_base::in);
	if (f.is_open()) {


		string Name;
		int Population, Area;
		Zoo temp;

		while (!f.eof())	
		{
			f >> Name >> Population >> Area;
			temp.SetName(Name);
			temp.SetPopulation(Population);
			temp.SetArea(Area);
			ZooList.push_back(temp);
		}
	}
}

