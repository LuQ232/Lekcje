#pragma once
#include <iostream>
#include "Samochod.h"

class Kabriolet: public Samochod 
{
	bool dach_otwarty = false;
public:
	Kabriolet();
	Kabriolet(std::string marka_, int pojemnosc_baku_, int predkosc_maksymalna_, float zuzycie_paliwa_);

	void otworz_dach();
	void zamknij_dach();
	void jedz(float predkosc, float dystans);
};