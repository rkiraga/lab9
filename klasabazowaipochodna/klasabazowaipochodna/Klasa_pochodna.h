#pragma once
#include "Klasa_bazowa.h"
class Klasa_pochodna : public Klasa_bazowa
{
public:
	Klasa_pochodna();
	~Klasa_pochodna();
	void pochodzenie() override;
};