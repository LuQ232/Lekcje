#pragma once
#include <iostream>
#include <cmath>
class Samochod
{
protected:
	std::string marka;
	int pojemnosc_baku;
	int predkosc_maksymalna;
	float zuzycie_paliwa;
public:
	Samochod();
	Samochod(std::string marka_ , int pojemnosc_baku_ , int predkosc_maksymalna_ , float zuzycie_paliwa_);
	void jedz(float predkosc, float dystans);
};