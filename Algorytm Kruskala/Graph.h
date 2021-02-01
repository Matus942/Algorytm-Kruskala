#ifndef GRAPH_H INCLUDED
#define GRAPH_H INCLUDED
#include <set>
#include <iostream>
#include <fstream>
#include "Krawedz.h"
#include <string>

class Graph
{
public:
	int wielkosc, wielkosc2;
	set <Krawedz> kontener;
	set <Krawedz>::iterator it;

	Krawedz *tab;
	string *tab2;
	int **tablica;
	void Read();
	void Kruskal();
	void Print_MST();

};
#endif

