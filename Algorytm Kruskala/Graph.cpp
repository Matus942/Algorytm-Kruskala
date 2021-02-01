#include "Graph.h"
#include "Krawedz.h"

void Graph::Read()
{
		cin >> wielkosc;

		tab2 = new string[wielkosc+1];

		for (int i = 0; i <= wielkosc; i++)
		{
			string a;
			getline(cin, a);
			tab2[i] = a;
		}
		cin >> wielkosc2;

		for (int i = 0; i<wielkosc2; i++)
		{
			int a = 0, b = 0, c = 0;
			cin >> a >> b >> c;
			kontener.insert(Krawedz(a, b, c));
		}

		tab = new Krawedz[wielkosc - 1];
		tablica = new int*[wielkosc];
		for (int i = 0; i<wielkosc; i++)
		{
			tablica[i] = new int[wielkosc];
		}

		for (int i = 0; i<wielkosc; i++)
		{
			for (int j = 0; j<wielkosc; j++)
			{
				tablica[i][j] = -1;
			}
		}

		for (int i = 0; i<wielkosc; i++)
		{
			int j = 0;
			tablica[i][j] = i;
		}
}


void Graph::Kruskal()
{
	it = kontener.begin();
	int P = 0;
	int L = 0;


	int Licznik = 0;

	while (P<wielkosc2)
	{
		int x = it->wierzcholek1;
		int y = it->wierzcholek2;

		int z = 0;
		int t = 0;
		int z1 = 0;
		int t1 = 0;
		bool A = false;
		bool B = false;
		bool C = false;

		for (int i = 0; i<wielkosc; i++)
		{
			for (int j = 0; j<wielkosc; j++)
			{
				if (tablica[i][j] == y)
				{
					z = i;
					t = j;
					for (int i = 0; i<wielkosc; i++)
					{
						if (tablica[z][i] == it->wierzcholek1)
						{
							C = true;
							break;
						}
					}
					A = true;
					break;
				}
			}
			if (A == true)
			{
				break;
			}
		}
		int Q = 0, Q1 = 0;
		if (C == false)
		{
			tab[Licznik] = *it;
			Licznik++;
			for (int i = 0; i<wielkosc; i++)
			{
				if (tablica[z][i] == -1)
				{
					Q = i;
					break;
				}
			}
			for (int i = 0; i<wielkosc; i++)
			{
				for (int j = 0; j<wielkosc; j++)
				{
					if (tablica[i][j] == x)
					{
						z1 = i;
						t1 = j;
						B = true;
						break;
					}
				}
				if (B == true)
				{
					break;
				}
			}
			for (int i = 0; i<wielkosc; i++)
			{
				if (tablica[z1][i] == -1)
				{
					Q1 = i;
					break;
				}
			}
			for (int i = 0; i<Q; i++)
			{
				tablica[z1][Q1] = tablica[z][i];
				Q1 += 1;
			}
			for (int i = 0; i<wielkosc; i++)
			{
				tablica[z][i] = -1;
			}
		}
		it++;
		P++;
		L = z;
	}

}
void Graph::Print_MST()
{
    cout<<wielkosc;
    for(int i=0; i<=wielkosc; i++)
    {
        cout<<tab2[i]<<endl;
    }
    cout<<(wielkosc-1)<<endl;
    for (int i = 0; i<wielkosc - 1; i++)
    {
        cout << tab[i] << endl;
    }

}

