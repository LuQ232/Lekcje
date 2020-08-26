#include "Kabriolet.h"

void Kabriolet::otworz_dach()
{
	if (dach_otwarty == false)
		dach_otwarty = true;
	else
		std::cout << " DACH JEST JUZ OTWARTY! \n";
}
void Kabriolet::zamknij_dach()
{
	if (dach_otwarty == true)
	{
		dach_otwarty = false;
	}
	else
	{
		std::cout << " DACH JEST JUZ ZAMKNIETY! \n";
	}

}

void Kabriolet::jedz(float predkosc, float dystans)
{
	if (dach_otwarty == true)
	{
		std::cout << "Dach jest otwarty. \n";
		Samochod::zuzycie_paliwa *= 1.15;
	}
	else
		std::cout << "Dach jest zamkniety. \n";
	Samochod::jedz(predkosc, dystans);
}

Kabriolet::Kabriolet()
{

}
Kabriolet::Kabriolet(std::string marka_, int pojemnosc_baku_, int predkosc_maksymalna_, float zuzycie_paliwa_):Samochod(marka_,pojemnosc_baku_,predkosc_maksymalna_,zuzycie_paliwa_)
{
	dach_otwarty = false;
}