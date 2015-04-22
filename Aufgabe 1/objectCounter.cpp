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

// Get Methioden
unsigned int objectCounter::getID() {return this->id;}
unsigned int objectCounter::getMaxId(){return maxId;}
unsigned int objectCounter::getNumber() {return number;}

// Initialieren der Konstanten
unsigned int objectCounter::maxId = 0;
unsigned int objectCounter::number = 0;

// Konstruktoren
objectCounter::objectCounter() {

	this->id = getMaxId() +1;
	maxId++;
	number++;
}

// Destruktor
objectCounter::~objectCounter(){
	number--;
}