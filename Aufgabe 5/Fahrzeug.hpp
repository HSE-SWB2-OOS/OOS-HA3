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
#include <ostream>
#include <C:\Users\tommel\Documents\GitHub\OOS-HA3\Aufgabe 5\MyString.hpp>

class Fahrzeug{
	
	// Deklaration Variabeln

	double km;					// Kilometerzähler
	MyString kz;				// Kennzeichen
	unsigned int vin;			// Eindeutige Seriennummer des Farzeuges.
	static unsigned int lastVin;		// Letzte vergebene Seriennummer


public:
	// Methoden
	void fahren(double);			// Erhöht den Kilometerzähler um den Übergebenen Wert
	static unsigned int useVin();			// Liefert eine Seriennummer für das Fahrzeug 
	//static void initVin();					// Initialisiert die Vin auf 0

	// Konstruktoren
	Fahrzeug(char*);

	// Operatoren
	friend std::ostream &operator<<(std::ostream &, Fahrzeug &);				// Gibt die Fahrzeugdaten aus

};