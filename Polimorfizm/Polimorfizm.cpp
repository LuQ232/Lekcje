#include <iostream>

class Ojciec
{
public:
    virtual void funkcja() = 0;
};

class Pierwszy_potomek:public Ojciec
{
public:
    void funkcja()
    {
        std::cout << "Jest to funkcja pierwszego potomka\n";
    }
};

class Drugi_potomek :public Ojciec
{
public:
    void funkcja()
    {
        std::cout << "Jest to funkcja drugiego potomka\n";
    }
};

int main()
{
    Pierwszy_potomek pierwszy;
    Drugi_potomek drugi;
    Ojciec* wirtualny_wskaznik; //tworzymy wirtualny wskaznik
    wirtualny_wskaznik = &pierwszy; // ustawiamy wskaznik na obiekt pierwszego potomka
    wirtualny_wskaznik->funkcja();  // wywolujemy funkcje
    wirtualny_wskaznik = &drugi;    // ustawiamy wskaznik na obiekt pierwszego potomka
    wirtualny_wskaznik->funkcja();  // wywolujemy funkcje
}
