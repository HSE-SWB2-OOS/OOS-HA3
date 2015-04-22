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
Header Datei die die Klasse Kunde beschreubt.
---------------------
*/

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Kunde
{
public:
	//Kunde();
	Kunde(int id, string name = "", string ort = "", int alter = 0);
	Kunde(Kunde const &k);
	~Kunde();
	
	void kaufe(double u);
	static int getAnzahl();
	void print();
	
private:
	char *name;
	char *ort;
	int *alter;
	double umsatz;
	int transaktion;
	int id;
	static int anzahl;

};

