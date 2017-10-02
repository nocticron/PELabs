// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Zoo.h"
#include <iostream> 
#include <fstream>
#include <conio.h>

void list_input(list<Zoo> &ZooList, char* fname);
void list_output(list<Zoo> &ZooList, char* fname);

int main(int argc, char* argv[])
{
	
	list<Zoo> ZooList;

//	list_input(ZooList, argv[1]);
	list_input(ZooList, "input.txt");


	
	//sorting by area/population, using sort from <algorithm>
	//lambda-based comparator
	//SYNTAX:
	//[ capture ] ( params ) attribute -> ret { body }		

	ZooList.sort([](Zoo& zoo1, Zoo& zoo2) {	
		return 	((double)zoo1.GetArea() / zoo1.GetPopulation()) >
				((double)zoo2.GetArea() / zoo2.GetPopulation());});
		
//	list_output(ZooList, argv[2]);
	list_output(ZooList, "output.txt");


	//searching population maximum with lambda expression


	int pmax = 0;
	[&pmax](list<Zoo> &ZooList) {

	list<Zoo>::iterator i;
	for (i = ZooList.begin(); i != ZooList.end(); ++i)
	{
		if ((*i).GetPopulation() > pmax) { pmax = (*i).GetPopulation(); }
	}

	}(ZooList);
	
	std::cout << "Maximum population: " << pmax;

	_getch();

	return 0;
}







void list_input(list<Zoo> &ZooList, char* fname)
{
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
		f.close();
	}
	
}

void list_output(list<Zoo> &ZooList, char* fname)
{
	ofstream f(fname, ios_base::out);
	if (f.is_open())
	{
		list<Zoo>::iterator i;
		for (i = ZooList.begin(); i != ZooList.end(); ++i) 
		{
			f << (*i).GetName() << " " << (*i).GetPopulation() << " " << (*i).GetArea() << endl;
			std::cout << (*i).GetName() << " " << (*i).GetPopulation() << " " << (*i).GetArea() << endl;
		}
		f.close();
	}

}