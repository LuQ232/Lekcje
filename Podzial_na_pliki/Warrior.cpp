#include "Warrior.h" 

Warrior::Warrior()
{

}

Warrior::Warrior(std::string name_, int str, int def)
{
	name = name_;
	strength = str;
	defence = def;
}

void Warrior::introduce()
{
	std::cout << "Im warrior. My name is " << name << ". I have : " << strength << " points of strength and " << defence << " points of defence.";
}
