#include "Krawedz.h"


Krawedz::Krawedz()
{
	wierzcholek1 = 0;
	wierzcholek2 = 0;
	dlugosc = 0;
}


Krawedz::Krawedz(int a, int b, int c)
{
	wierzcholek1 = a;
	wierzcholek2 = b;
	dlugosc = c;
}

bool Krawedz::operator <(const Krawedz &X) const
{
	if (dlugosc != X.dlugosc)
	{
		return (dlugosc < X.dlugosc);
	}
	else
	{
		return(wierzcholek1 < X.wierzcholek2);
	}

}

ostream& operator << (ostream &wyjscie, Krawedz const& X)
{
	wyjscie << X.wierzcholek1 << " " << X.wierzcholek2 << " " << X.dlugosc;
	return wyjscie;
}

Krawedz& Krawedz::operator = (const Krawedz &X)
{
	wierzcholek1 = X.wierzcholek1;
	wierzcholek2 = X.wierzcholek2;
	dlugosc = X.dlugosc;

	return *this;
}
