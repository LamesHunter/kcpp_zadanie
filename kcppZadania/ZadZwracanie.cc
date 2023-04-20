#include <iostream>
using namespace std;

int zwrocPrzezWartosc(int x)
{
    return x + 10;
}

void zwrocPrzezReferencje(int& x)
{
    x += 10;
}

void zwrocPrzezWskaznik(int* x)
{
    (*x) += 10;
}

void zwrocPrzezTablice(int tab[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        tab[i] += 10;
    }
}

int main()
{
    int a = 5;
    int b = 5;
    int c = 5;
    int tablica[] = { 1, 2, 3, 4, 5 };

    // Zwracanie wartości przez wartość
    int wynik1 = zwrocPrzezWartosc(a);
    cout << "Wynik zwrocony przez wartosc: " << wynik1 << endl;

    // Zwracanie wartości przez referencję
    zwrocPrzezReferencje(b);
    cout << "Wartosc po zwroceniu przez referencje: " << b << endl;

    // Zwracanie wartości przez wskaźnik
    zwrocPrzezWskaznik(&c);
    cout << "Wartosc po zwroceniu przez wskaznik: " << c << endl;

    // Zwracanie wartości przez tablicę
    zwrocPrzezTablice(tablica, 5);
    cout << "Wartosci tablicy po zwroceniu przez tablice: ";
    for (int i = 0; i < 5; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}