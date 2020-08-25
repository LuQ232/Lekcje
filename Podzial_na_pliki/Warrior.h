#pragma once
#include <iostream>

class Warrior
{
	std::string name;
	int strength;
	int defence;
public:
	Warrior(); 
	Warrior(std::string name_, int str, int def);
	void introduce();
};