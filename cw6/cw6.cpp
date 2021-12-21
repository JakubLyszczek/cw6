#include <iostream>
#include "Mfunkcje.h"
using namespace std;

//deklaracja

int main()
{
	//zad 1
	/*cout << kolo(2) << endl;
	cout << prostokat(2, 2) << endl;
	cout << trojkat(2,2) << endl;
	cout << szescian(2) << endl;
	cout << walec(2, 2) << endl;*/

	//zad2

	//zad3
	/*
	int n;
	cout << "podaj liczbe dziesietna: ";
	cin >> n;
	binarnie(n);
	*/

	//zad4
	int n;
	cout << "Podaj liczbę od 0 do 30: ";
	cin >> n;
	if (n >= 0 && n <= 30) {
		cout << "Dwusilnia:" << dwusilnia(n) << endl;
	}
	else {
		cout << "zla liczba";
	}
}






