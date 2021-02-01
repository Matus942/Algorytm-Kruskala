#include <iostream>
#include <fstream>
#include "Krawedz.h"
#include <set>
#include <string>
#include "Graph.h"

using namespace std;

int main()
{
	Graph G;
	G.Read();
	G.Kruskal();
	G.Print_MST();

	system("pause");
	return 0;
}
