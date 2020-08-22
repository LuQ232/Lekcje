#include <iostream>
#include <algorithm>
//using namespace std;

class Punkt
{
private:
	int x;
	int y;
public:
	Punkt()
	{
	}
	Punkt(int v1, int v2)
	{
		x = v1;
		y = v2;
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};

class Kwadrat
{
private:
	int lewa;
	int prawa;
	int gora;
	int dol;
public:
	Kwadrat()
	{
	}
	Kwadrat(Punkt xx1, Punkt yy1, Punkt xx2, Punkt yy2)
	{
		lewa = std::min({ xx1.get_x(), xx2.get_x(),yy1.get_x(), yy2.get_x() });
		std::cout << "\n Lewa : " << lewa;
		prawa = std::max({ xx1.get_x(), xx2.get_x(),yy1.get_x(), yy2.get_x() });
		std::cout << "\n Prawa: " << prawa;
		gora = std::max({ xx1.get_y(), xx2.get_y(),yy1.get_y(), yy2.get_y() });
		std::cout << "\n Gora: " << gora;
		dol = std::min({ xx1.get_y(), xx2.get_y(),yy1.get_y(), yy2.get_y() });
		std::cout << "\n Dol: " << dol;
	}
	bool sprawdz(Punkt punkt)
	{
		if (punkt.get_x() >= lewa && punkt.get_x() <= prawa && punkt.get_y() >= dol && punkt.get_y() <= gora)
			return true;
		else
			return false;
	}

	int get_x1()
	{
		return lewa;
	}
	int get_x2()
	{
		return prawa;
	}
	int get_y1()
	{
		return gora;
	}
	int get_y2()
	{
		return dol;
	}
};

int main()
{
	int x, y;
	std::cout << "Wierzcholek 1: ";
	std::cin >> x >> y;
	Punkt a(x, y);
	std::cout << "Wierzcholek 2: ";
	std::cin >> x >> y;
	Punkt b(x, y);
	std::cout << "Wierzcholek 3: ";
	std::cin >> x >> y;
	Punkt c(x, y);
	std::cout << "Wierzcholek 4: ";
	std::cin >> x >> y;
	Punkt d(x, y);
	std::cout << a.get_x() << " " << a.get_y() << "\n" << b.get_x() << " " << b.get_y() << "\n" << c.get_x() << " " << c.get_y() << "\n" << d.get_x() << " " << d.get_y();

	std::cout << "\n Punkt: ";
	std::cin >> x >> y;
	Punkt g(x, y);

	Kwadrat kw(a,b,c,d);

	kw.sprawdz(g);
	if (kw.sprawdz(g) == true)
		std::cout << "\n Punkt jest w kwadracie";
	else
		std::cout << "\n Nawaliles";
	return 0;
}
