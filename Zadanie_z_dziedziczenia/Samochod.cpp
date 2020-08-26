#include "Samochod.h"

Samochod::Samochod()
{
	std::cout << "Konstruktor.\n";
}

Samochod::Samochod(std::string marka_, int pojemnosc_baku_, int predkosc_maksymalna_, float zuzycie_paliwa_)
{
	marka = marka_;
	pojemnosc_baku = pojemnosc_baku_;
	predkosc_maksymalna = predkosc_maksymalna_;
	zuzycie_paliwa = zuzycie_paliwa_;
}


void Samochod::jedz(float predkosc, float dystans)
{
	if (predkosc > predkosc_maksymalna)
		predkosc = predkosc_maksymalna;
	if (predkosc < 0.2 * predkosc_maksymalna || predkosc > 0.9 * predkosc_maksymalna)
		zuzycie_paliwa *= 1.2;
	if (predkosc <= predkosc_maksymalna)
		std::cout << "Samochod pojedzie z predkoscia: " << predkosc << " km/h \n";
	else
		std::cout << "Samochod pojedzie z predkoscia: " << predkosc_maksymalna << " km/h \n";

	std::cout << "Na trasie zuzyjemy: " << dystans / 100 * zuzycie_paliwa << " litrow paliwa.\n"; //dystans / predkosc +
	std::cout << "Podczas trasy bêdzie trzeba tankowaæ " << floor((dystans / 100 * zuzycie_paliwa) / pojemnosc_baku) << " razy.\n";
	std::cout << "Podroz zajmie: " << dystans/predkosc + float(floor((dystans / 100 * zuzycie_paliwa) / pojemnosc_baku) * 1 / 6)  << " h\n";
}
