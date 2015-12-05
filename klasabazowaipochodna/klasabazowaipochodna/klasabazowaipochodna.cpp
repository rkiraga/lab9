// klasabazowaipochodna.cpp
//

#include "stdafx.h"
#include "Klasa_pochodna.h"
#include "Klasa_bazowa.h"

int main()
{
	Klasa_bazowa b1;
	Klasa_pochodna p1;
	
	b1.pochodzenie();
	p1.pochodzenie();

	Klasa_bazowa * wskbaz = &p1;
	wskbaz->pochodzenie();

return 0;
}

