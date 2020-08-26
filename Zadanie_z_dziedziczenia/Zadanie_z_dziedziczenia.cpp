#include <iostream>
#include "Samochod.h"
#include "Kabriolet.h"

int main()
{
	Kabriolet autko("Audi A4",20,180,12); // marka, pojemnosc baku, Vmax, spalanie 
	autko.otworz_dach();
	autko.jedz(100, 350);	// predkosc, dystans
}
