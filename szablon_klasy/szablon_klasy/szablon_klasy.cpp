// szablon_klasy.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Pojemnik_na_dane.h"
using namespace std;

template <typename T> void pomnoz_i_wypisz(T a, T b)
{
	cout << "\nwynik dzialania: " << a << " * " << b <<endl;
	a *= b;
	cout << a <<endl;
}

int main()
{	
	cout << "\nPOJEMNIK1:\n";
	Pojemnik_na_dwie_dane <int, float> pojemnik1(25, 43.212);
	pojemnik1.wyswietl();

	cout << "\nPOJEMNIK2:\n";
	Pojemnik_na_dwie_dane <string, double> pojemnik2("jakis napis", 0.0435);
	pojemnik2.wyswietl();

	cout << "\nMNOZENIE ROZNYCH TYPOW LICZB:\n";

	pomnoz_i_wypisz<int>(5,7);

	pomnoz_i_wypisz<double>(5.054, -3.1415);



    return 0;
}