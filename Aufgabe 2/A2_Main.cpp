/* Uebungen zu OOP HA 3, Aufgabe 3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 21.04.2015
Version: 1.0
Zeitaufwand: xh

Aenderungshistorie:
-------------------
Aenderungsgrund  durchgefuehrte Aenderung  Autor  Datum
-------------------------------------------------------
Programmbeschreibung:
Main um die Klasse Kunde zu testen.
---------------------
*/
#include "Kunde.hpp"

int main()
{
	
	Kunde k1(1, "Tim", "Stuttgart", 45);
	Kunde k2(2, "Meier", "Esslingen", 28);
	Kunde k3(3, "Paul", "Metzingen", 32);
	Kunde k4(4, "Nina", "Esslingen", 23);
	Kunde k5(5, "Lisa", "Wien", 82);
	Kunde k6(k5);

	cout << "Kundenliste ohne Einkauf." << endl;
	k1.print();
	k2.print();
	k3.print();
	k4.print();
	k5.print();
	k6.print();

	k1.kaufe(23.99);
	k2.kaufe(134.99);
	k3.kaufe(12.99);
	k4.kaufe(230);
	k5.kaufe(500);
	

	cout << "Kundenliste mit Einkauf 1." << endl;
	k1.print();
	k2.print();
	k3.print();
	k4.print();
	k5.print();
	k6.print();

	cout << "struct anzahl:" << endl;
	cout << "K1: " << k1.getAnzahl() << endl;
	cout << "K1: " << k2.getAnzahl() << endl;
	cout << "K1: " << k3.getAnzahl() << endl;
	cout << "K1: " << k4.getAnzahl() << endl;
	cout << "K1: " << k5.getAnzahl() << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		k2.kaufe(i * 10);
	}

	for (int i = 0; i < 20; i++)
	{
		k4.kaufe(i * 20);
	}
	k5.kaufe(100);
	k6.kaufe(234.56);

	cout << "Kundenliste mit Einkauf 2." << endl;
	k1.print();
	k2.print();
	k3.print();
	k4.print();
	k5.print();
	k6.print();

	getchar();
	return 0;
}