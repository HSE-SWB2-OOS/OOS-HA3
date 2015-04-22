/* Uebungen zu OOP, Aufgabe 1.0
Erstersteller: Thomas Günter
E-Mail: Thomas.Guenter@stud.hs-esslinge.de

Datum: 21.04.2015
Version: 1.0
Zeitaufwand: xh

Aenderungshistorie:
-------------------
Aenderungsgrund  durchgefuehrte Aenderung  Autor  Datum
-------------------------------------------------------
Programmbeschreibung:
Die Klasse objectCounter zählt Elemente, vergibt eindeutige IDs und verwaltet diese.
---------------------
*/

// Includes

#include "objectCounter.hpp"
#include <iostream>
using namespace std;

void main(){

	objectCounter *O1 = new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O1->getID() << endl;

	objectCounter *O2= new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O2->getID() << endl;

	objectCounter *O3 = new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O3->getID() << endl;

	objectCounter *O4 = new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O4->getID() << endl;

	objectCounter *O5 = new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O5->getID() << endl;

	cout << "Anzahl Objekte " << O1->getNumber() << endl;
	cout << "Letzte ID" << O1->getMaxId() << endl;

	delete(O2);

	cout << "Ein Objekt gekloescht" << endl;
	cout << "Anzahl Objekte " << O1->getNumber() << endl;
	cout << "Letzte ID" << O1->getMaxId() << endl;

    // Ausgabe
	cout << "Anzahl objekte: " << O1->getNumber() << endl;

	objectCounter *O8 = new objectCounter();
	cout << "Objekte " << O1->getNumber() << endl;
	cout << "Id lautet " << O8->getID() << endl;

	cin.get();
}