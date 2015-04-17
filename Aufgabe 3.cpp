#include <iostream>
#include <conio.h> // für _getch()

// Achtung: _getch() ist nicht im Standard und
// daher abhängig vom Compiler
using namespace std;

// Größe des Labyrinths
const int kZeilen = 21;
const int kSpalten = 21;

// Zeichen, die im Labyrinth vorkommen können,
// NL = new line, EOS = end of string
enum Symbole {
	MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n',
	EOS = '\0', ICH = 'X', GEIST = 'G'
};

// Das Labyrinth als char-Array
// Die vorletzte Spalte speichert ein Zeilenendezeichen \n
// und die letzte ein \0-Zeichen, damit die Ausgabe leichter wird.
char labyrinth[kZeilen][kSpalten + 2];

// Labyrinth mit # füllen
void initialisieren() {
	for (int i = 0; i < kZeilen; i++) // Jede Zeile
	{
		for (int j = 0; j < kSpalten +2; j++) // Jede Spalte
		{
			if (j < kSpalten)					// Die Spalten für die Mauern
				labyrinth[i][j] = MAUER;
			else
				if (j == kSpalten)				// Die Spalte für NL
					labyrinth[i][j] = NL;
				else
					labyrinth[i][j] = EOS;		// An sonst die Spalte für EOS
		}
	}
}
// Labyrinth auf dem Bildschirm ausgeben
void drucken() {
	// Console frei machen
	system("cls");
	// Labyrinth ausgeben

	for (int i = 0; i < kZeilen; i++)
	{
		for (size_t j = 0; j < kSpalten+1; j++)
		{
			cout << labyrinth[i][j];
		}
	}
}


// Hilfsfunktion max
int max(int x, int y) {
	return (x <= y) ? y : x;
}
// Hilfsfunktion min
int min(int x, int y) {
	return (x <= y) ? x : y;
}
// Durch Herumlaufen werden Wege im Labyrinth erzeugt
// ASCII-Wert der Tasten: oben 72, links 75, rechts 77, unten 80
void erzeugen() {
	char c = 'x';
	int posx = kSpalten / 2;
	int posy = kZeilen / 2;
	labyrinth[posy][posx] = ICH;
	drucken();
	while (c != 'q') {
		drucken();
		cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
		labyrinth[posy][posx] = WEG;
		c = _getch();
		switch (int(c)) {
			// oben
		case 72: posy = max(1, posy - 1); break;
			// links
		case 75: posx = max(1, posx - 1); break;
			// rechts
		case 77: posx = min(kSpalten - 2, posx + 1); break;
			// unten
		case 80: posy = min(kZeilen - 2, posy + 1); break;
			// q = quit
		case 113: break;
		}
		labyrinth[posy][posx] = ICH;
	}
}
int main() {
	initialisieren();
	drucken();
	erzeugen();
}
