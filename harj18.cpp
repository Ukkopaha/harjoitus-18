/****************************************************
* Paulus Linna
* IIA14SB
*
* Teht‰v‰kuvaus:
*
*	Tee ohjelma, joka kysyy viiden koiran nimet ja i‰t.
*	Tiedot tallennetaan tietuetaulukkoon.
*	a) j‰rjest‰ tiedot ik‰ -kent‰n mukaan suuruusj‰rjestykseen
*	(pienimm‰st‰ suurimpaan). Ohjelma tulostaa lopuksi
*	jarjestetyn taulukon n‰yt‰lle.
*	b) j‰rjest‰ tiedot nimi -kent‰n mukaan aakkosj‰rjestyksess‰
*	Ohjelma tulostaa lopuksi jarjestetyn taulukon n‰ytolle.
*
*	Lajittelu tulee toteuttaa siten, ett‰ se toimisi samoin
*	my‰s 50 tai 5000 koiran tapauksssa.
*
* P‰iv‰m‰‰r‰: 6.11.2014
* Versio 1.0
*
***************************************************/
#include <iostream>
using namespace std;

struct KOIRATIEDOT
{
	char nimi[10];
	int ika;
};
const int MAX_TAULU = 5;
int main()
{
	KOIRATIEDOT koira[MAX_TAULU];
	int ind;
	for (ind = 0; ind < MAX_TAULU; ind++){
		cout << "Anna koiran " << ind + 1 << ". nimi: ";
		cin >> koira[ind].nimi;
		cout << "Anna koiran " << ind + 1 << ". ika: ";
		cin >> koira[ind].ika;
	}
	
	/* Teht‰v‰ a)
	for (int i = 0; i < MAX_TAULU-1; i++)
	{
		for (int j = i + 1; j < MAX_TAULU; j++)
		{
			if (koira[j].ika > koira[i].ika)
			{
				KOIRATIEDOT tmp = koira[i];
				koira[i] = koira[j];
				koira[j] = tmp;
				
			}

		}

	}*/

	// Teht‰v‰ b)
	for (int i = 0; i < MAX_TAULU - 1; i++)
	{
		for (int j = i + 1; j < MAX_TAULU; j++)
		{
			if (koira[i].nimi[0] > koira[j].nimi[0])
			{
				KOIRATIEDOT tmp = koira[i];
				koira[i] = koira[j];
				koira[j] = tmp;

			}

		}

	}

	for (ind = 0; ind < MAX_TAULU; ind++){
		cout << "Koiran nimi: " << koira[ind].nimi << endl;
		cout << "Koiran ika: " << koira[ind].ika << endl << endl;

	}



}


/*#include <iostream>
using namespace std;

const int MAX_TAULU = 4;

int main()
{
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };
	cout << "Taulukko ennen jarjestamista\n";
	for (int i = 0; i < MAX_TAULU; i++)
	{
		cout << taulu[i] << " ";



	}
	cout << endl;
	cout << "Jarjestetaan taulukkoa ...\n";
	for (int i = 0; i < MAX_TAULU - 1; i++)
		for (int j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
			{
			int tmp = taulu[i];
			//cout << i << j << endl;
			taulu[i] = taulu[j];
			taulu[j] = tmp;
			}

	cout << "Taulukko jarjestettyna\n";
	for (int i = 0; i < MAX_TAULU; i++)
	{
		cout << taulu[i] << " ";
	}

	
}*/