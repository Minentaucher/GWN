#include "Toll.h"

int Kontozahlen;
int Betrag;
int endbetrag;

//Magie beginnt hier:
void Speichern()
{
	ofstream schreiben;
	schreiben.open("Konto.txt");
	schreiben << endbetrag;
	schreiben << "€";
	schreiben.close();
}

void Auslesen()
{
	fstream schreiben;
	schreiben.open("Konto.txt");
	schreiben >> Kontozahlen;
	schreiben.close();
}

//Magie endet hier

void Auszahlen()
{
	Auslesen();
	system("cls");
	cout << "Bitte geben Sie den Betrag ein, den Sie Auszahlen moechten: \n" << endl;
	cout << "" << endl;
	cin >> Betrag;
	Sleep(2000);
	cout << "" << endl;
	cout << "" << endl;
	cout << "Sie haben nun Geld ausgezahlt."<< endl;
	//Geld wird abgebucht :)
	endbetrag = Kontozahlen - Betrag;
	Sleep(500);
	Speichern();
	system("cls");
}

void Einzahlen()
{
	Auslesen();
	system("cls");
	cout << "Bitte geben Sie den Betrag ein, den Sie einzahlen moechten: \n" << endl;
	cout << "" << endl;
	cin >> Betrag;
	Sleep(500);
	cout << "" << endl;
	cout << "" << endl;
	cout << "Sie haben nun Geld eingezahlt." << endl;
	cout << "Ihr eingezahlter Betrag:" << endl;
	cout << Betrag;
	Sleep(500);
	endbetrag = Kontozahlen + Betrag;
	Speichern();
	system("cls");
}



