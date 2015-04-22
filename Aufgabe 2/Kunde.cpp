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
Die Klasse Kunde verwaltet einen Kunden indem sie die Personalien speichert und die Transaktionen mit protokolliert.
---------------------
*/

#include "Kunde.hpp"

int Kunde::anzahl = 0;

// Default Konstruktor
//Kunde::Kunde()
//{
//	this->name = new char[1];
//	this->name[0] = '\0';
//
//	this->ort = new char[1];
//	this->ort[0] = '\0';
//
//	this->alter = 0;
//	this->id = 0;
//
//	anzahl++;
//}

// Konstruktor mit Default Parameter
Kunde::Kunde(int id, string name, string ort, int alter)
{

	this->name = new char;
	strcpy_s(this->name, name.length()+1, name.c_str());

	this->ort = new char;
	strcpy_s(this->ort, ort.length()+1, ort.c_str());
	this->alter = new int[1];
	this->alter[0] = alter;

	this->id = id;

	anzahl++;
	
}

// Kopierkonstruktor
Kunde::Kunde(Kunde const &k)
{
	int size;
	size = (unsigned int)strlen(k.name);
	this->name= new char[size + 1];
	strcpy_s(this->name, size + 1, k.name);

	size = (unsigned int)strlen(k.ort);
	this->ort = new char[size + 1];
	strcpy_s(this->ort, size + 1, k.ort);

	this->alter = k.alter;
	this->id = k.id;

	anzahl++;
}

// Destruktor
Kunde::~Kunde()
{
	delete[] this->name;
	delete[] this->ort;
	delete[] this->alter;

	anzahl--;
}

void Kunde::kaufe(double u)
{
	this->umsatz += u;
	this->transaktion++;
}

int Kunde::getAnzahl(){
	return anzahl;
}

void Kunde::print()
{
	cout << "Kunde " << this->name << " aus " << this->ort << " (ID = " << this->id
		<< ", " << this->alter[0] << " Jahre) \nhatte " << this->transaktion << " Transaktione(en) und "
		<< this->umsatz << " Euro Umsatz" << endl << endl;
}
