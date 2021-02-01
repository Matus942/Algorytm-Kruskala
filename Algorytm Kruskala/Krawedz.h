#ifndef KRAWEDZ_H INCLUDED
#define KRAWEDZ_H INCLUDED
#include <iostream>

using namespace std;

class Krawedz
{
public:
	int wierzcholek1, wierzcholek2, dlugosc;


	Krawedz();
	Krawedz(int, int, int);
	Krawedz& operator = (const Krawedz &);

	bool operator <(const Krawedz &) const;
	friend ostream& operator << (ostream&, Krawedz const&);


};
#endif




