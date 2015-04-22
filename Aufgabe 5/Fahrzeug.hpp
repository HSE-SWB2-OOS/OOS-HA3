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

#include <ostream>


class Fahrzeug{
	// Deklaration Variabeln

	double km;			// Kilometerzähler
	MyString kz;				// Kennzeichen
	unsigned int vin;			// Eindeutige Seriennummer des Farzeuges.
	unsigned int lastVin;		// Letzte vergebene Seriennummer


public:
	// Methoden
	void fahren(double);			// Erhöht den Kilometerzähler um den Übergebenen Wert
	unsigned int useVin();			// Liefert eine Seriennummer für das Fahrzeug 

	// Konstruktoren
	Fahrzeug(char[]);

	// Operatoren
	friend std::ostream &operator<<(std::ostream &, Fahrzeug &);				// Gibt die Fahrzeugdaten aus

}