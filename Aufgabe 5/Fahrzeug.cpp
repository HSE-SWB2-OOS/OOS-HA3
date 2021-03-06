/* Uebungen zu OOP, Aufgabe 5.0
Erstersteller: Thomas Günter
E-Mail: Thomas.Guenter@stud.hs-esslinge.de

Datum: 22.04.2015
Version: 1.0
Zeitaufwand: xh

Aenderungshistorie:
-------------------
Aenderungsgrund  durchgefuehrte Aenderung  Autor  Datum
-------------------------------------------------------
Programmbeschreibung:
Die Klasse Fahrzeug.
---------------------
*/

// Includes
#include "Fahrzeug.hpp"
#include <iostream>
#include <C:\Users\tommel\Documents\GitHub\OOS-HA3\Aufgabe 5\MyString.hpp>
#include <string>

// Statische Klassenvariable
unsigned int Fahrzeug::lastVin = 0;

// Methoden

void Fahrzeug::fahren(double km){			// Erhöht den Kilometerzähler um das Argument km
	this->km+=km;
}

unsigned int Fahrzeug::useVin(){			// Liefert eine neue Seriennummer und speichert Klassengültig die letzte Seriennummer
	return ++lastVin;
}

//void Fahrzeug::initVin(){
//	// Statische Klassenvariablen
//	static unsigned int lastVin = 0;
//}

	// Konstruktoren

Fahrzeug::Fahrzeug(char *kennzeichen){
	this->kz = MyString(kennzeichen);
	this->km = 0.0;
	this->vin = useVin();
}
	// Operatoren

std::ostream & operator<<(std::ostream &s, Fahrzeug &kfz){
	return s << kfz.kz << " " << "VIN.: " << kfz.vin << " km = " << kfz.km << std::endl;
	}

