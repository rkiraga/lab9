#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Pojemnik_na_dwie_dane
{
public:
	Pojemnik_na_dwie_dane(T1 a, T2 b) :pierwsza_dana(a), druga_dana(b)
	{
	}

	~Pojemnik_na_dwie_dane()
	{
	}

	T1 pierwsza_dana;
	T2 druga_dana;

	void wyswietl()
	{
		cout << "\npierwsza dana: \t" << pierwsza_dana << endl;
		cout << "\ndruga dana: \t" << druga_dana <<endl;
	}
};